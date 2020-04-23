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
		ll n;
		cin>>n;
		vector<int > b;	
		vector<int > a;
		for(i=0;i<n;i++)
		{
			cin>>k;
			b.push_back(k);
		}
		for(i=0;i<n;i++)
		{
			cin>>k;
			a.push_back(k);
		}
		ll m1=*max_element(b.begin(),b.end());
		ll m2=*max_element(a.begin(),a.end());
		if(m1==m2)
		{
			cout<<"Tie"<<endl;
		}
		else if(m1>m2)
		{
			cout<<"Bob"<<endl;
		}
		else if(m2>m1)
		{
			cout<<"Alice"<<endl;
		}
	}
	return 0;
}
