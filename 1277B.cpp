#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
#include <bits/stdc++.h>
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
        ll a[n];
        set<ll> s;
        for(i=0;i<n;i++)
        {
            cin>>l;
            if(!(l&1))
            s.insert(l);
        }
        for(auto x:s)
        {
            // cout<<x<<" ";
        }
        int sum=0;
        int m=0;
        while(!s.empty())
        {
            m=*s.rbegin();
            s.erase(m);
            if(!(m&1))
            {
                m=m/2;
                s.insert(m);
                sum++;
            }
        }
        cout<<sum<<"\n";
        for(auto x:s)
        {
            // cout<<x<<" ";
        }
    }
}
