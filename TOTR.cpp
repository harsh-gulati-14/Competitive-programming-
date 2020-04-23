#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>l;
	char s[27];
	cin>>s;
	string s1="abcdefghijklmnopqrstuvwxyz";
string s2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(l--)
	{
		char a,b;
		vector<int >v;
		char f[100];
		cin>>f;
		ll p;
		for(i=0;i<strlen(f);i++)
		{
			if(isupper(f[i]))
			{
				a=(char)toupper(f[i]);
				for(j=0;j<26;j++)		
				{
					b=(char)s[j];
					if(a==b)
					{
						p=j;			
					}
				}
				cout<<s2[p];
			}
			else if(islower(f[i]))
			{
				a=(char)f[i];
				for(j=0;j<26;j++)		
				{
					if(a==s[j])
					{
						p=j;			
					}
				}
				cout<<s1[j];
			}
			else if((char)f[i]=='_')
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
