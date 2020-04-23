#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	cin>>l;
	while(l--)
	{
		int n;
		int p=0,q=0,r=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					p++;
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				q++;
			}
		}
		if(p==q)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
