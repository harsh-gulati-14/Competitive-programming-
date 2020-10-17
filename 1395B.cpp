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
    // cin>>t;
    // while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        cout<<x<<" "<<y<<"\n";
        for(i=1;i<=m;i++)
        {
            if(i!=y)
            {
                cout<<x<<" "<<i<<"\n";
            }
        }
        for(i=1;i<x;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
        for(i=x+1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
}
