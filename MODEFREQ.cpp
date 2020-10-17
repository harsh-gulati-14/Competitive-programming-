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
        ma m,m1;
        for(i=0;i<n;i++)
        {
        	cin>>a[i];
        	m[a[i]]++;
        }
        ll p=0,r;
        for(auto x:m)
        {
        	m1[x.second]++;
        }
        for(auto x:m1)
        {
        	if(p<x.second)
        	{
        		r=x.first;
        		p=x.second;
        	}
        	// cout<<x.first<<" "<<x.second<<"\n";
        }
        cout<<r<<"\n";
    }
}
