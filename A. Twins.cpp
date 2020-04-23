#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>l;
	vector<int >v;
	for(i=0;i<l;i++)
	{
	    cin>>k;
	    v.push_back(k);
	}
	sort(v.begin(),v.end(),greater<int> ());
	k=0;
	j=accumulate(v.begin(),v.end(),0);
	ll s=0;
	i=0;
	while(k<=j)
	{
	  k=k+v[i];
	  j=j-v[i];
	  i++;
	  s++;
	}
	cout<<s;
	return 0;
}
