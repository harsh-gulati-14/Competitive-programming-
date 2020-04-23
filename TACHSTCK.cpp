#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n,d,m,f=0;
	cin>>n>>d;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	m=*max_element(a,a+n);
	for(i=0;i<n;i++)
	{
		if(m-a[i]>2)
		{
			f++;
		}
	}
	if(f==n-1)
	{
		m=-1;
	}
	f=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]!=-1 && a[j]!=)
			{
				if(abs(a[i]-a[j])<=2)
				{
					a[i]=-1;
					a[j]=-1;
					f++;
				}
			}
		}
	}
	cout<<f;
}

