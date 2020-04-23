#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	string s;
	cin>>s;
	ll x=0,y=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='L')
		{
			x=x-1;
		}
		else if(s[i]=='R')
		{
			x=x+1;
		}
		else if(s[i]=='U')
		{
			y=y+1;
		}
		else if(s[i]=='D')
		{
			y=y-1;
		}
	}
	cout<<x<<" "y;
	return 0;
}
