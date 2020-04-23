#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,k,l;
	cin>>l;
	while(l--)
	{
		long n,s=0;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			cin>>b[i];
		}
		for(i=0;i<n;i++)
		{
		int c=0,p[n]={};
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])	
				{
					p[i]=b[j];
					c++;
				}
				sort(p,p+c);
				s=s+*max_element(p,p+ n); 
				for(k=0;k<c;k++)
				{
					cout<<p[i]<<" ";
				}
				cout<<endl;
				cout<<s;
			}
		}
	}
}
