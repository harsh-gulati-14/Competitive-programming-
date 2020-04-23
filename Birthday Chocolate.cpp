// This code is by HARSH GULATI
// buggy -c0der
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,k,l,a[10000],n,m,t,s=0,c=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}	
		for(i=0;i<=n-1;i++)
		{
			s=0;
			for(j=i+1;j<n;j++)
			{
				s=s+a[j]+a[i];
				if(s%k==0)
			{
				c++;
			}
			else
			s=0;
		}
		}
		cout<<c;
	}
