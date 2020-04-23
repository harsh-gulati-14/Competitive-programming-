#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int> v(5);
	cin>>l;
	for(i=0;i<l;i++)
	{
		cin>>j;
		v[j-1]++;
	}
	ll m,n;
	m=*max_element(v.begin(),v.end());
	auto it=find(v.begin(),v.end(),m);
	for(i=0;i<5;i++){
	}
	return 0;
}
