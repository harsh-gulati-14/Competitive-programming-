#include<iostream>
using namespace std;
int main()
{
	long i,j=0,k=0,l,u,d;
	cin>>l;
	char a[l];
	cin>>a;
	long p[l+2]={0};
	for(i=0;i<l;i++)
	{
		if(a[i]=='U')
		{
			j=j+1;
		}
		else{
			j=j-1;
		}
		p[i]=j;
	}	
	for(i=0;i<l+2;i++)
	{
		if(p[i]==0)
		{
			k++;
		}
	}
	cout<<k/2;
}
