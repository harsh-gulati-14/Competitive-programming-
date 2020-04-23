#include<iostream>
using namespace std;
int main()
{
	long i,j,k,l,p,t,s=0;
	cin>>k>>l;
	long a[k];
	for(i=0;i<k;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	j=a[l];
	cin>>p;
	t=(s-j)/2;
	if(t==p)
	{
		cout<<"Bon Appetit";
	}
	else{
		cout<<p-t;
	}
}
