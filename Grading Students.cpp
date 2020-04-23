// This code is by HARSH GULATI
// buggy -c0der
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,a[10000],n,m,t,s,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>40)
		{
			s=a[i]%5;
			if(s>=3)
			{
				a[i]=a[i]+s-1;
			}
		}
 	}
 	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
