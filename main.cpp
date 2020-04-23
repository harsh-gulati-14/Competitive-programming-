#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	int a[1000000];
	cin>>l;
	while(l--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i=i+2)
		{
			
				if(a[i]!=a[i+1])
				{
					cout<<a[i];
				}
			
	}
	}
}
