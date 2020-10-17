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
    // cin>>t;
    // while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        set<ll> sa,sb,sc;
        ma m;
        for(i=0;i<a;i++)
        {
        	cin>>k;
        	sa.insert(k);
        }
        for(i=0;i<b;i++)
        {
        	cin>>k;
        	sb.insert(k);
        }
        for(i=0;i<c;i++)
        {
        	cin>>k;
        	sc.insert(k);
        }
        for(auto x:sa)
        {
        	m[x]++;
        }
        for(auto x:sc)
        {
        	m[x]++;
        }
        for(auto x:sb)
        {
        	m[x]++;
        }
       set<ll> v;
        for(auto x:m)
        {
        	// cout<<x.first<<" "<<x.second<<"\n";
        	if(x.second>=2)
        	{
        		v.insert(x.first);
        	}
        }
        cout<<v.size()<<"\n";
        for(auto x:v)
        {
        	cout<<x<<"\n";
        }
    }
}
