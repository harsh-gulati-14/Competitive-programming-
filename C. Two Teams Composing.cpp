#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>l;
	while(l--)
	{
	vector<int >v;	
	ll n,b,c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		v.push_back(k);
	}
	int m=*max_element(v.begin(),v.end());
	int a[m]={0},p=0;
	for(i=0;i<v.size();i++)
	{
		a[v[i]]++;
		p++;
	}
	ll cnt=0,o=0;
	ll sum=accumulate(a,a+p,0);
	ll ma=*max_element(a,a+p);
	for(i=0;i<p;i++)
	{
		if(a[i]>0)
		cnt++;
		if(a[i]==ma)
		{
			 o=i;
		}
	}
	ll f=sum-a[o];
	if(f/cnt==1)
	{
		cout<<ma/2<<"\n";
	}
	else{
		cout<<0<<"\n";
	}
}
	return 0;
}

