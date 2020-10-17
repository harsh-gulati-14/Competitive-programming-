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
int main()
{
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
        ma m;
        for(i=0;i<n;i++)
        {
            cin>>k;
            m[k]++;
        }
        ll ans=0,p;
        for(ll s=2;s<=2*n;s++)
        {
            ll p=0;
            for(auto x:m)
            {
                ll other=s-x.first;
                if(m.count(other) && other>=0)
                {
                    p+=min(m[other],x.second);
                }
            }
            p=p/2;
            ans=max(ans,p);
        }
        cout<<ans<<"\n";
    }
}

