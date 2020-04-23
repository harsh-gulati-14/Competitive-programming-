#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int rev(int x)
{
	int d,r=0,l,n;
	n=x;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	return r;
}
int main()
{
	ll i,j,k,l,ch;
	float a,b,c;
	vector<float> v;
	cin>>a>>b>>k;
	for(i=a;i<=b;i++)
	{
		v.push_back(i);
	}
	int p=0;
	for(i=0;i<v.size();i++)
	{
		j=rev(v[i]);
		c=abs(v[i]-j)/k;
		ch=c;
		if(ch==c)	
		{
			p++;
		}
	}
	cout<<p;
	return 0;
}
