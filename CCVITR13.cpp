#include<iostream>
#include<map>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
ll check(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    if(prime[n])      
        return 1;
    return 0;
} 
ll checkf(ll n)
{
    double p;
    p=sqrt(n);
    ll q=p;
    if(q==p)return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<pair<ll,ll>> v;
        if(n==1)
        {
            cout<<2<<"\n";
            continue;
        }
        if(check(n))
        {
            cout<<n+1<<"\n";
            continue;
        }
        if(checkf(n))
        {
            cout<<2*sqrt(n)<<"\n";
            continue;
        }
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.insert(make_pair(i,n/i));
            }
        }
        ll p=INT_MAX;
        for(auto x:v)
        {
            p=min(p,x.first+x.second);
        }
        cout<<p<<"\n";
    }
}
