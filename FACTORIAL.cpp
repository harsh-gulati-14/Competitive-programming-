#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>l;
	while(l--)
	{
		ll f=1;
		cin>>k;
		for(i=1;i<=k;i++)
		{
			f=f*i;
		}
		cout<<f<<endl;
	}
	return 0;
}
