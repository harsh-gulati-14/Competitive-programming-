#include<iostream>
using namespace std;
int check(int n)
{
	if(n>10)
	{
	int d,r=0,k;
	k=n;
	while(k>0)
	{
		d=k%10;
		r=r*10+d;
		k=k/10;
	}	
	if(n==r)
	{
		return n;
	}
	else{
		return 0;
	}
}
}
int main()
{
	long i,j,k,l,n,a[10000],r=0,c=0;
	cin>>l;
	while(l--)
	{
		cin>>n;
		for(i=0;i<=3*n/2;i++)
		{
			r=check(i);
			a[i]=r;
			c++;
		}
		for(i=0;i<c;i++)
		{
			cout<<a[i];
			/*if(a[i]!=0)
			{
				cout<<a[i];
				break;
			}*/
		}
	}
}
