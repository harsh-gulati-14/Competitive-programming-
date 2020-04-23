#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int factor(int x)
{
	ll c=0,i,j,k;
	while(x%2==0)
	{
		c++;
		x=x/2;
	}
	for(i=3;i<=sqrt(x);i++)
	{
		while(x%i==0)
		{
			x=x/i;
			c++;
		}
	}
	if(x>1)
	{
		c++;
	}
	return c;
}
int main()
{
	ll i,j,k,l,t,x;
	cin>>l;
	while(l--)
	{
		cin>>x>>k;
		t=factor(x);
		if(t>=k)
		{
			cout<<1<<"\n";
		}
		else{
			cout<<0<<"\n";
		}
	}
}
