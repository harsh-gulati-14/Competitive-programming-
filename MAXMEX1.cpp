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
        ll n,m;
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll pmex=0;
        sort(a,a+n);
        ll f=1;
        for(i=0;i<n;i++)
        {
            if(a[i]>f)
            {
                pmex=f;
                break;
            }
            else{
                f++;
            }
        }
        if(i==n && pmex==0)
        {
            pmex=a[n-1]+1;
        }
        if(pmex==m)
        {
            cout<<n<<"\n";
        }
        else if(pmex<m)
        {
            cout<<-1<<"\n";
        }
        else
        {
            ll r=0;
            for(i=0;i<n;i++)
            {
                if(a[i]!=m)
                {
                    r++;
                }
            }
            cout<<r<<"\n";
        }
    }
}
