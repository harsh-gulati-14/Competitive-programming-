#include<bits/stdc++.h>
using namespace std;
long checkprime(long a)
{
	long i,j,k=0,l=0;
	long v[a];
	for(i=1;i<a;i++)
	{
		k=0;
		for(j=2;j*j<i;j++)
		{
			if(i%j==0)
			{
				k++;
			}
		}
		if(k==0)
		{
			v[l]=i;
			l++;
		}
	}
	return *max_element(v,v+l);
}
int main()
{
	long i=0,j,k,l,a=0,b=0;
	cin>>l;
	while(l--)
	{
		cin>>k;
		while(k!=1)
		{
			k=k-checkprime(k);
			i++;
		}
		if(i%2!=0)
		{
			cout<<"BOB"<<endl;
		}
		else{
			cout<<"ALICE"<<endl;
		}
	}
}
