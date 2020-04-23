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
		ll a,b,c;
		cin>>a;
		if(a&1 && a>1)
		{
			cout<<a/2<<"\n";
		}
		else{
			a=a/2;
			cout<<a-1<<"\n";
		}
	}
	return 0;
}
