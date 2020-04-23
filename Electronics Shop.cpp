#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,k,l,c,p,q,r;
	cin>>p>>q>>r;
	long a[q],b[r],x[q*r];
	for(i=0;i<q;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<r;i++)
	{
		cin>>b[i];
	}
	l=0;
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			int s=a[i]+b[j];
			if(s<=p)
			{
				x[l]=s;
				l++;
			}
		}
	}
	if(l>0)
	{
	sort(x,x+l);
	cout<<x[l-1];}
	else{
		cout<<-1;
	}
}
