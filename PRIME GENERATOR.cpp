#include<iostream>
#include<math.h>
using namespace std;
int check(int n)
{
	long long  i,a=0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
		return true;
}
int main()
{
	long long i,j,m,k,l,n,a=0,b;
	cin>>k;
	while(k--)
	{
	cin>>n>>m;
	for(i=n;i<=m;i++)
	{
		if(check(i) && i!=1)
		{
			cout<<i<<endl;
		}
	}
	cout<<endl;
}
}
