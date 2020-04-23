#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	string s,s1;
	cin>>s;
	cin>>s1;
	transform(s.begin(),s.end(),s.begin(),::tolower)
	transform(s1.begin(),s1.end(),s1.begin(),::tolower)
	for(i=0;i<s.length();i++)
	{
		v.push_back(s[i]-'a');
	}
	for(i=0;i<s1.length();i++)
	{
		v1.push_back(s1[i]-'a');
	}
	ll sum1=0,sum2=0;
	accumulate(s.begin(),s.end(),sum1);
	accumulate(s1.begin(),s1.end(),sum2);
	if(sum1==sum2)
	{
		cout<<0<<endl;
	}
	else if(sum1>sum2)
	{
		cout<<1<<endl;
	}
	else if(sum2>sum1)
	{
		cout<<-1<<endl;
	}
	return 0;
}
