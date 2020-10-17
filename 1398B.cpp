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
        string s;
        vec v;
        cin>>s;
        int n=s.length();
        for(i=0;i<n;i++)
        {
        	int c=0;
        	if(s[i]=='1')
        	{
        		j=i;
        		while(s[j]=='1' && j<n)
        		{
        			j++;
					c++;
				}
				i=j;
				v.pb(c);
			}
		}
		sort(v.begin(),v.end(),greater<> ());
        ll c=0;
		for(i=0;i<v.size();i+=2)
		{
			c+=v[i];
		}
        cout<<c<<"\n";
    }
}

