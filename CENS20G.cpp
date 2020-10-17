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
unsigned int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}
bool ispos(int x, int y, int a, int b) 
{ 
	x = abs(x), y = abs(y), a = abs(a), b = abs(b); 
	return (gcd(x, y) == gcd(a, b)); 
} 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
//   #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        string s;
        ll x,y;
        cin>>s;
        cin>>x>>y;
        ll q;
        cin>>q;
    	ll R=0,L=0,U=0,D=0;
    	for(i=0;i<s.length();i++)
    	{
    		if(s[i]=='R')
    		{
    			R++;
    		}
    		else if(s[i]=='L')
    		{
    			L++;
    		}
    		else if(s[i]=='U')
    		{
    			U++;
    		}
    		else if(s[i]=='D'){
    			D++;
    		}
    	}
        while(q--)
        {
        	ll a,b;
        	cin>>a>>b;
        	ll r=0,l=0,u=0,d=0;
        		if(a>=x)
        		{
        			r=a-x;
        		}
        		if(a<x)
        		{
        			l=x-a;
        		}
        		if(b>=y)
        		{
        			u=b-y;
        		}
        		if(b<y)
        		{
        			d=y-b;
        		}
//                 cout<<r<<" "<<l<<" "<<u<<" "<<d<<"\n";
//                 cout<<R<<" "<<L<<" "<<U<<" "<<D;
	        	if(R>=r && L>=l && U>=u && D>=d)
	        	{
	        		printf("YES %d\n",r+l+d+u);
	        	}
	        	else
	        	{
        			printf("NO\n");
        		}
        }
    }
}

