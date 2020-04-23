#include<iostream>
using namespace std;
int main()
{
	long long c,d,e,f;
	long long i,j,k,l,n,q;
	cin>>n>>q;
	int a[n],b[q];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<q;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			if(b[i]>=a[i])
			{
				c=a[i];
			}
		}
		cout<<c<<endl;
	}
}
