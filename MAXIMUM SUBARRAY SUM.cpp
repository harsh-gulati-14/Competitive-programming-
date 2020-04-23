#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,k,l,n;
	int j=0,b=0;
	vector<int> v;
	for(i=0;i<6;i++)
	{
		k=0;
		cin>>k;
		v.push_back(k);
	}
	for(i=0;i<6;i++)
	{
		j=max(v[i],v[i]+j);
		b=max(j,b);
	}
	cout<<b<<endl;
	return 0;
}
