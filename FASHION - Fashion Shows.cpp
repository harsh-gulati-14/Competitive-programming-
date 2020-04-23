#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int> m;
	vector<int> w;
	cin>>l;
	while(l--)
	{
		ll n,s=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			j=0;
			cin>>j;
			m.push_back(j);
		}
		for(i=0;i<n;i++)
		{
			j=0;
			cin>>j;
			w.push_back(j);
		}
		sort(m.begin(),m.end());
		sort(w.begin(),w.end());
		for(i=0;i<n;i++)
		{
			s=s+(m[i]*w[i]);
		}
		cout<<s<<endl;
	}
}
