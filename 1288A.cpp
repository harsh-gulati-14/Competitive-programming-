#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getmid(double mid,double m)
{
	double d=ceil(m/(mid+1));
	return d+mid;
}
bool solve(int n,int m)
{
	double ans=-1;
	double l=0,r=n;
	while(l<=r)
	{
		double mid=(l+r)/2;
		mid=(int)mid;
		m=(double)m;
//		cout<<getmid(mid,m)<<" "<<ans<<"\n";
		if(getmid(mid,m)<=n)
		{
			ans=getmid(mid,m);
		}
		if(getmid(mid,m)>n)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
//	cout<<ans;
	if(ans!=-1)
	{
		return true;
	}
	return false;
	
}
int main()
{
	int i,j,k,l,n,m;
	cin>>l;
	while(l--)
	{
		cin>>n>>m;
		if(solve(n,m))
		{
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";
	}
}
