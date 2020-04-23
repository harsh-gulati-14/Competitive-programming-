#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j=0,k=0,l;
	ll n=5;
	cin>>l;
	for(i=0;i<l;i++)
	{
		k=k+floor(n/2);
		n=floor(n/2)*3;
	}
	cout<<k;
	return 0;
}
