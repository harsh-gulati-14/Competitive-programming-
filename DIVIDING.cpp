#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j=0,k,l,n,s=0;
	cin>>n;
	j=(n*(n+1))/2;
	while(n--)
	{
		long x;
		cin>>x;
		s=s+x;
	}
	if(s==j)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
