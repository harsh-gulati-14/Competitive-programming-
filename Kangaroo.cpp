#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>i>>j>>k>>l;
	if(j<l)
	{
	if(abs(i-k)%abs(j-l)==0)
	{
	cout<<"YES"<<endl;
}
else{
		cout<<"NO"<<endl;
	}
}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
