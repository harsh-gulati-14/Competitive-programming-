#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	string s;
	cin>>l;
	while(l--)
	{
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='+')
			{
				j++;
				break;	
			}
			else if(s[i]=='-')
			{
				j--;
				break;
			}
		}
		cout<<j;
	}
	return 0;
}
