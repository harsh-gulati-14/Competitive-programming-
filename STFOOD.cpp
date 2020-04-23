#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	cin>>l;
	while(l--)
	{
		vector<int >v;
		ll n,s,p,v,a;
		cin>>n;
		while(n--)
		{
			cin>>s>>p>>v;
			a=v.push_back(p/(s+1));
		}
		for(auto x: v)
		{
			cout<<x<<" ";
		}
	}
	return 0;
}
