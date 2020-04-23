#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	ll n,m,a,b,c;
	cin>>n>>m;
	ll p[n]={0};
	for(i=0;i<m;i++)
	{
		cin>>a;
		for(i=0;i<a;i++)
		{
			cin>>b;
			p[b-1]=a;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
    ll q,x,y;
    cin>>q;
    while(q--)
    {
    	cin>>x>>y;
    	cout<<min(abs(a[x]-a[y]),k-abs(a[x]-a[y]))<<endl;
	}
	return 0;
}
