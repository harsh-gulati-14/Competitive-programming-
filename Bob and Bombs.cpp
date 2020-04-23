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
		string s;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='B')
			{
				v.push_back(i);
			}
		}
		int a[s.length()]={0};
		for(i=0;i<v.size();i++)
		{
			a[v[i]]=-1;
			a[v[i]+1]=-1;
			a[v[i]+2]=-1;
			a[v[i]-1]=-1;
			a[v[i]-2]=-1;
		}
		ll c=0;
		for(i=0;i<s.length();i++)
		{
			if(a[i]==-1)
			{
				c++;	
			}
		}
		cout<<c-v.size();
	}
	return 0;
}
