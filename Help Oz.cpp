
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	vector<int >v1;
	cin>>l;
	for(i=0;i<l;i++)
	{
		cin>>k;
		v.push_back(k);
	}
	ll m=*max_element(v.begin(),v.end());
	for(i=2;i<=m;i++)
	{
		ll p=v[0]%i;
		if(v[i]%i==p)
		{
			v1.push_back(i);
		}
	}
	for(auto x:v1)
	{
		cout<<x<<" ";
	}
	return 0;
}
