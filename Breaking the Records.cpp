// This code is by HARSH GULATI
// buggy -c0der
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k,a[10000],min=0,max=0,g=0,l=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	i=0;
	j=0;
	i=j+1;
	while(i!=n)
	{
		if(a[i]>a[j])
		{
			if(a[i]>max)
			{
				max=a[i];
				g++;
			}
			else if(a[j]<min)
			{
				min=a[j];
				l++;
			}
				i++;
				j++;
		}
		else if(a[j]>a[i])
		{
			if(a[j]>max)
			{
				max=a[j];
				g++;
			}
			else if(a[i]<min)
			{
				min=a[i];
				l++;
			}
			i++;
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	cout<<g<<" "<<l;
}
	
