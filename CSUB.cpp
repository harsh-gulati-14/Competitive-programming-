#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l,c=0;
	char a[10000];
	cin>>l;
	while(l--)
	{
		c=0;
		cin>>k;
		cin>>a;
		for(i=0;i<k;i++)
		{
			if(a[i]=='1')
			{
				c++;
			}2
		}
		cout<<(c*(c+1))/2<<endl;
	}
}
