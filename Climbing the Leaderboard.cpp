#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n,s=1,b=-1,c;
	cin>>n;
	int m[n],a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>l;
	for(i=0;i<l;i++)
	{
		cin>>m[i];
	}
	k=0;
	c=0;
	s=1;
	while(k<l)
	{
		s=1;
		c=0;
		b=0;
		j=m[k];
		while(c<n)
		{
			if(j>a[0])
			{
				cout<<s<<endl;
				b=1;
				break;
			}
			else if(c>0)
			{
			 if(a[c]!=a[c-1])
			{
				s++;
				if(j>a[c])
			{
				
				cout<<s<<endl;
				b=1;
				break;
			}
				else if(j==a[c])
			{
				cout<<s<<endl;
				b=1;
				break;
			}
			}
		}
				c++;
		}
			if(b==0)
			{
				cout<<++s<<endl;
			}
			k++;
		}
}

