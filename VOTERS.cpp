/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,p,q,r,m=0,n=0,t=0;
	cin>>p>>q>>r;
	int a[p],b[q],c[r],ab[p*q],bc[q*r],ac[p*r],abc{p*q*r};
	for(i=0;i<p;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<q;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<r;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(a[i]==b[j])
			{
				ab[m]=a[i];
				m++;
			}
		}
	}	
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			if(b[i]==c[j])
			{
				bc[n]=c[i];
				n++;
			}
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a[i]==c[j])
			{
				ac[t]=a[i];
				t++;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		cout<<ab[i]<<" ";
	}
}*/
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	int n=n1+n2+n3;
	int a[50000];
	while(n--)
	{
		int x;
		cin>>x;
		a[x-1]++;
	}
	for(i=0;i<50000;i++)
	{
		cout<<a[i]<<" ";
	}
}
