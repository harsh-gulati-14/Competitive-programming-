#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l,n,a[26]={0},b[26]={0},c;
	string s,s2;
	string s1="hackerearth";
	for(i=0;i<11;i++)
	{
		a[s1[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		b[s1[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		cout<<b[i]<<" ";
	}
	if((b[10]==b[2]) && (b[10]==b[19]))
	{
		j=b[10];
		if((a[0]=2*j) &&(a[7]=2*j)&&(a[4]=2*j)&&(a[17]=2*j))
		{
			cout<<j;
		}
	}
	return 0;
}
