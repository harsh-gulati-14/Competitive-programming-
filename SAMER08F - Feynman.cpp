#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i=1,j,k,l=1;
	while(i!=0)
	{
		cin>>i;
		if(i!=0)
		{
			k=(i*(i+1)*((2*i)+1))/6;
			cout<<k<<endl;
		}
	}
	return 0;
	
}
