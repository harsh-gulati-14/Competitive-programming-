#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int a)
{
	int f=0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			f++;
		}
	}
	if(f==0)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int i,j=0,k,l;
	cin>>l;
	int d=0,r=0,a[100],n=0;
	k=l;
	int o;
	while(k>0)
	{
		d=k%10;
		k=k/10;
		r=r*10+d;
		a[o++]=d;
	}
	int z=r;
	k=o;
	while(z>0)
	{
		d=z%10;
		z=z/10;
		r=r*10+d;
		a[n++]=d;
	}
	int p=n;
	int m=0;
	while(p--)
	{
		r=0;
		j=a[0];
		for(i=0;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=j;
		for(i=0;i<n;i++)
		{
			r=r*10+a[i];
		}
		//cout<<check(r);
		if(check(r)!=1)
		{
				p=0;
		     	break;
			}
		else
		m++;
	}
	if(m==n)
	{
		cout<<"Circular prime"<<endl;
	}
	else{
		cout<<"Not circular prime"<<endl;
	}
	return 0;
}
