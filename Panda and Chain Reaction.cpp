#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	cin>>l;
	while(l--)
	{
		ll n;
		cin>>n;
		ll c=1000000009;
		ll a[n];
		a[0]=1;
		a[1]=6;
		for(i=2;i<n;i++)
		{
			a[i]=((2*(a[i-1]+2)%c-(a[i-2])%c+c))%c;
		}
		cout<<a[n-1]<<"\n";
	}
	return 0;
}
