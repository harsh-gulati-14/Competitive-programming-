#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,l;
	string s;
	cin>>s;
	l=s.length();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cin>>k;
	while(k--)
	{
		for(i=0;i<l;i++)
		{
			if(s[i]!='9')
			{
				s[i]='9';
				k--;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		cout<<s[i]-'0';
	}
}
