#include<iostream>
using namespace std;
int rev(int n)
{
	int d,r=0,k,l;
	l=n;
	while(l>0)
	{
		d=l%10;
		r=r*10+d;
		l=l/10;
	}
	return r;
}
int main()
{
	int i,j,k,n,l;
	cin>>l;
	while(l--)
	{
		cin>>n;
		cout<<rev(n)<<endl;
	}
}
