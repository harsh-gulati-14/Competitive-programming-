#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		int s=0;
		k=a[i];
		for(j=0;j<n;j++)
		{
			if(k==a[j] || k+1==a[j])
			{
				s++;	
			}
		}
		b[i]=s;
	}
	cout<<*max_element(b,b+n);
}
