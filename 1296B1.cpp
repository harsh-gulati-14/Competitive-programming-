#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
struct SquareMatrix {
  SquareMatrix(int _n) : n(_n) {
    data.assign(_n, vector<ll>(_n, 0));
  }
  vector<ll> &operator[](int i) {
    return data[i];
  }
  const vector<ll> &operator[](int i) const {
    return data[i];
  }
  SquareMatrix operator*(const SquareMatrix &other) const {
    assert(n == other.n);
    SquareMatrix ret(n);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
          ret[i][j] = (ret[i][j] + data[i][k] * other[k][j]) % mod;
        }
      }
    }
    return ret;
  }
  vector<vector<ll>> data;
  int n;
};
SquareMatrix quickpower(SquareMatrix m, int p) {
  int n = m.n;
  SquareMatrix ret(n);
  for (int i = 0; i < n; ++i) ret[i][i] = 1;
  while (p) {
    if (p & 1) {
      ret = ret * m;
    }
    m = m * m;
    p >>= 1;
  }
  return ret;
}
ll quickpower(ll x, int p) {
  ll ret = 1;
  while (p) {
    if (p & 1)  ret = (ret * x) % mod;
    x = (x * x) % mod;
    p >>= 1;
  }
  return ret;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
  int n, k;
  scanf("%d%d", &n, &k);
  vector<int> a(n);
  int x = 0, y = 0, z = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
    x += a[i] == 0;
  }
  y = n - x;
  for (int i = 0; i < x; ++i)
    z += a[i] == 0;
  if (x > y) { // If the number of 0 is greater than 1, you can reverse the array
    swap(x, y);
    z = 0;
    for (int i = n - 1; i >= n - x; --i)
      z += a[i] == 1;
  }
  SquareMatrix m(x + 1);
  for (int i = 0; i <= x; ++i) {
    m[i][i] = x * (x - 1) / 2 + y * (y - 1) / 2 + i * (x - i) + (x - i) * (y - x + i);
    if (i - 1 >= 0) m[i][i - 1] = (x - i + 1) * (x - i + 1);
    if (i + 1 <= x) m[i][i + 1] = (i + 1) * (y - x + i + 1);
  }
  m = quickpower(m, k);
  ll ans = 0;
  for (int i = 0; i <= x; ++i)
    ans = (ans + m[i][z]) % mod;
  ans = m[x][z] * quickpower(ans, mod - 2) % mod;
  printf("%I64d\n", ans);
  return 0;
}