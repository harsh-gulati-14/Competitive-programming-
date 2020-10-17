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
        ll n,x,p,k;
        cin>>n>>x>>p>>k;
        ll a[n+1];
        a[0]=-100;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll posx=-1,posp,posk;
        for(i=1;i<=n;i++)
        {
            if(a[i]==x)
            { 
                posx=i;
            }
        }
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        // cout<<"\n";
        // cout<<posx<<"\n";
        if(posx==-1)
        {
            cout<<-1<<'\n';
            continue;    
        }
        if(posx==p)
        {
            cout<<0<<'\n';
            continue;
        }
        if(posx<p && k>=p && posx<k)
        {
            cout<<p-posx<<"\n";
            continue;
        }
        if(posx<k && k>=p && posx<p)
        {
            cout<<p-posx<<"\n";
            continue;
        }
        if(posx>k && k<=p)
        {
            cout<<abs(p-posx)<<"\n";
            continue;
        }
        if(posx>p && k<=p && posx>k)
        {
            cout<<posx-p<<"\n";
            continue;
        }
        cout<<-1<<'\n';
    }
}
