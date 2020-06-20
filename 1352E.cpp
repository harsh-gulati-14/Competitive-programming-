#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    while(k--)
    {
      
      int n; cin >> n;
        int arr[8001],is[8001];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            is[i + 1] = 0;
        }
 
        for (int i = 0; i < n; ++i)
        {
            int sm = arr[i];
 
            for (int j = i + 1; j < n; ++j)
            {
                sm += arr[j];
 
                if (sm > n)
                    break;
 
                is[sm] = 1;
            }
        }
 
        int ans = 0;
 
        for (int i = 0; i < n; ++i)
            if (is[arr[i]])
                ans++;
 
        cout << ans << '\n';
    }
}