#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n,m,p,q,r,s=0,t;
	cin>>l;
	while(l--)
	{
	cin>>n>>m;
	int b[n],a[n],c[n],d[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n;j++)
	{
		cin>>b[j];
	}
	t=0;
	for(i=0;i<n;i++)
	{
	    s=0;
		for(j=0;j<n;j++)
		{
			if(a[i]<=m && m>0)
			{
			    if(a[i]==a[j])
				s=s+b[j];
			}
		}
		c[i]=s;
	}
	t=0;
	for(i=0;i<n;i++)
	{
	    if(c[i]>0)
	    {
	        d[t++]=c[i];
	    }
	}
	cout<<*min_element(d,d+t)<<endl;
	}
}
