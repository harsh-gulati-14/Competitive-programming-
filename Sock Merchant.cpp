#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,k,l,n,c=1,s=0;
	cin>>n;
	long a[n],p[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]!=-1 && a[j]!=-1)
			{
				c++;
				a[j]=-1;
			}
		}
		p[i]=c;
	}
	for(i=0;i<n;i++)
	{
		s=s+(p[i]/2);
	}
	cout<<s;
}
