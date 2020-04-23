#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,k,l,n;
	cin>>n;
	while(n--)
	{
		long s,t;
		cin>>i>>j>>k;
		s=abs(i-k);
		t=abs(j-k);
		
		if(s<t)
		{
			cout<<"Cat A"<<endl;
		}
		else if(s>t)
		{
			cout<<"Cat B"<<endl;
		}
		else{
			cout<<"Mouse C"<<endl;
		}
	}
}
