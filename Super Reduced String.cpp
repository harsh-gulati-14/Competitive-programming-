#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	vector<char> v;
	string s;
	cin>>l;
	cin>>s;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(s[i]!=s[j] && v.back()!=s[j])
			{
				v.push_back(s[j]);
			}
			else{
				break;
			}
		}
	}
	for(auto x:v)
	{
		cout<<x;
	}
	
}
