#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<ll>
#define pb push_back 
#define ma map<ll,ll> 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    // freopen("output1.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
         ll n,s,k;
        cin>>n>>s>>k;
        ll a[k],f=0;
        ma m;
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        vec v(n+1,0);
        for(i=1;i<=n;i++)
        {
            if(m[i])
            {
                v[i]=1;
            }
        }
        if(v[s]==0)
        {
            cout<<0<<"\n";
        }
        else{
            k=0;
            i=s-1;
            ll ans1=INT_MAX,ans2=INT_MAX;
            while(k!=1 && i>0)
            {
                if(!v[i])
                {
                    k=1;
                    ans1=s-i;
                    break;
                }i--;
            }
            k=0;
              i=s+1;
                while(k!=1 && i<=n)
                {
                    if(!v[i])
                    {
                        k=1;
                        ans2=i-s;
                        break;
                    }i++;
                }   
            cout<<min(ans1,ans2)<<"\n";
        }
    }
}
