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
        ll n;
        set<ll> s;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>k;
            s.insert(k);
        }
        vec v;
        for(auto x:s)
        {
            v.pb(x);
        }
        ll f=0;
        if(v[0]==0)
        {
            f=1;
        }
        if(f)
        cout<<s.size()-1<<"\n";
        else
        cout<<s.size()<<"\n";
    }
}
