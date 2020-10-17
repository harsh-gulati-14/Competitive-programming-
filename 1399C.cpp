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
    // freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        i=0,j=n-1;
        ll ans=0;
        ll r=0,p=0;
        ll s=0;
        while(i<j)
        {
            if(s<r)
            {
                p=max(ans,p);
                ans=0;
                i=0;
                s=0;
            }
            else{
                r=s;
                s=a[i]+a[j];
                ans++;
                i++;j--;
            }
        }
        if(p==0)
        cout<<ans<<"\n";
        else
            cout<<p<<"\n";
    }
}
