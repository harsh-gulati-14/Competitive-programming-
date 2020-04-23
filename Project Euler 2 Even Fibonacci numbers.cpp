#include<iostream>
using namespace std;
int main()
{
	unsigned long long i,j,k,l;
	int n;
	cin>>l;
	while(l--)
	{
		unsigned long long p,q,r=0,s=0;
		cin>>n;
		long long a[n];
		p=2;
		q=0;
		a[0]=2;
		i=1;
		while(r<n)
		{
			r=(4*p)+q;
			a[i]=r;
			q=p;
			p=r;
			i++;
		}
		j=i;
		for(i=0;i<j-1;i++)
		{
			s=s+a[i];
		}
		cout<<s<<endl;
	}
}
