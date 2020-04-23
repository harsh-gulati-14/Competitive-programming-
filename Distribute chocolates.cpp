#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll i=1,j,k=0,l;
	ll s=0,n,c;
	cin>>l;
	while(l--)
	{
		s=0;
		k=0;
		i=1;
		cin>>c>>n;
		while(s<=c)
		{
			k=s;
			s=(n*i)+((n-1)*(n))/2;
            i++;
		}
		if(k!=0)
		cout<<c-k<<endl;
		else{
			cout<<c<<endl;
		}
	}
	return 0;
}
