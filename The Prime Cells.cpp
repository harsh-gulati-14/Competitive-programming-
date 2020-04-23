#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int x)
{
	int i,f=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		f++;
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
	ll i,j,k,l,s=0;
	vector<int >v;
	cin>>l;
	int a[l][l];
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			cin>>a[i][j];
		}
	}
	ll c=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			s=0;
			k=a[i][j];
			ll r=i;
			ll b=j;
			ll p,q;
			for(p=0;p<l;p++)
			{
				s=s+a[p][b];
			}
			for(p=0;p<l;p++)
			{
				s=s+a[r][p];			
			}
			s=s-2*k;
			if(check(s)==1)
			{
				c++;		
			}
		}
	}
	cout<<c;
	return 0;
}
