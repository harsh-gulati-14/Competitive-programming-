#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	string s;
	cin>>l;
	while(l--)
	{
		ll a=0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			a=a+(s[i]-'0');
		}
		cout<<a<<endl;
	}
	return 0;
}
