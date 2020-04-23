#include<iostream>
using namespace std;
int main()
{
	long i,j,k,l,n;
	cin>>n;
	cin>>i;
	if(i>1 && i<6)
	{
		k=1+((i-1)/2);
	}
	j=(n-i)/2;
	if(j>k)
	{
		cout<<k;
	}
	else{
		cout<<j;
	}
	
}
