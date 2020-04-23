#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,j,k,l,a,b;
	cin>>l;
	while(l--)
	{
		cin>>a>>b;
		if(b!=0)
		{
		cout<<a/b;
		cout<<" "<<a%b<<endl;
		}
		if(b==0)
		{
			cout<<0<<" "<<a<<endl;
		}
	}
}
