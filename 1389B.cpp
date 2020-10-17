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
        ll n,k,z;
        cin>>n>>k>>z;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll prefix[n+1];
        prefix[0]=a[0];
        for(i=1;i<n;i++)
        {
            prefix[i]=a[i]+prefix[i-1];
        }
        for(i=0;i<n;i++)
        {
            // cout<<prefix[i]<<" ";
        }
        ll val=0;
        ll ans=0;
        // this is the similair approcah like ours but we didin,t applied preifix sum over here
        // same as we can move max of k steps and k-2*i menas the total steps require dto get maximum answer
        for(i=0;i<=z;i++)
        {
            val=0;
            for(j=0;j<=k-2*i;j++)
            {
                if(i!=0)
                {
                    val=max(val,(prefix[k-2*i]+(i*(a[j]+a[j+1]))));
                // this is the step responsile for max answer over here
                }
                val=max(val,prefix[k-2*i]);
            }
            ans=max(ans,val);
        }
        cout<<ans<<"\n";
    }
}
