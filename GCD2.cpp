#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int red(long long a,char b[])
{
	long long int mod=0,i,k;
	k=strlen(b);
	for(i=0;i<k;i++)
	{
		mod=(mod*10+b[i]-'0')%a;
	}
	return mod;
}
int main()
{
	long long int i,j,k,l,a,c;
	char b[300];
	cin>>l;
	while(l--)
	{
		cin>>a;
		cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
		cin>>b;
		k=strlen(b);
		cout<<gcd(a,red(a,b))<<endl;
	}
}
