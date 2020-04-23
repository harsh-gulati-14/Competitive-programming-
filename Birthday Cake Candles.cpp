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
	sort(a,a+n);
	k=a[n-1];
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			c++;
		}
	}
	cout<<c;
}
