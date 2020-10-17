#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
set<ll> st; 
void generateNumbers(ll n, ll num, ll a, ll b) 
{ 
    if (num > 0 && num < n) 
        st.insert(num);
    if (num >= n) 
        return;
    if (num * 10 + a > num) 
        generateNumbers(n, num * 10 + a, a, b); 

    generateNumbers(n, num * 10 + b, a, b); 
} 
ll prllNumbers(ll n) 
{ 
    for (ll i = 0; i <= 9; i++) 
        for (ll j = i + 1; j <= 9; j++) 
            generateNumbers(n, 0, i, j); 

   return st.size();
} 
int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    ll p=prllNumbers(n); 
    set<ll> s;
    while(n>0)
    {
        ll d=n%10;
        s.insert(d);
        n=n/10;
    }
    if(s.size()<=2)
    {
        cout<<p+1<<"\n";
    }
    else{
        cout<<p<<"\n";
    }
    return 0; 
} 
