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
#define ma map<ll,ll> 
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
        ll a[n];
        // ma m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        ll b[n];
        for(i=0;i<n;i++)
        {
            sum=0;
            k=a[i];
            // cout<<k<<"\n";
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>k)
                {
                    // cout<<k<<" "<<a[j]<<" ";
                    sum++;
                }
            }
            // cout<<'\n';
            for(j=i+1;j<n;j++)
            {
                if(k>a[j])
                {
                    // sum++;
                }
            }
            ll f=0,p=5;
            // cout<<sum+1<<'\n';
            for(j=i;j>=0;j--)
            {
                f=0;
                p=0;
                for(m=i+1;m<n;m++)
                {
                    if(a[j]>a[m])
                    {
                        f++;
                    }
                }
                p=max(p,f);
                sum+=p;
            }cout<<sum+1<<'\n';
            b[i]=sum+1;

        }
        for(i=0;i<n;i++)
        {
            // cout<<b[i]<<" ";
        }
        // cout<<'\n';
        ll bes,wor;
        bes=*min_element(b,b+n);
        wor=*max_element(b,b+n);
        if(bes>n)bes=n;
        if(wor>n)wor=n;
        cout<<bes<<" "<<wor<<"\n";
    }
}
