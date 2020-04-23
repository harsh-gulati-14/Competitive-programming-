#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>k;
	if(k==0){
		cout<<0;
	}
	if(k==1)
	{
		cout<<1;
	}
	if(k&1)
	{
		k=k-1;
		cout<<k+(k/2);
	}
	else{
		cout<<k+(k/2)-1;
	}
	return 0;
}
