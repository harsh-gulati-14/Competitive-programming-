#include<bits/stdc++.h>
using namespace std;
void red(int);
int main()
{
	long long i,j,k,l,n;
	cin>>l;
	while(l--)
	{
		k=0;
		cin>>n;
		long a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=0)
			{
				k=k+a[i];
			for(j=i+1;j<n;j++)
			{
				if(a[i]!=0)
				a[i]=a[i]-1;
			}
		}
		}
		cout<<
	}
}
