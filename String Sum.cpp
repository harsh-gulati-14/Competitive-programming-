#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,l=0;
	for(i=0;i<s.length();i++)
	{
		l=l+(s[i]-'a'+1);
	}
	cout<<l;
}
