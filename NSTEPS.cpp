#include<iostream>
using namespace std;
int main()
{
	long long i,j,k,l;
	cin>>l;
	while(l--)
	{
		cin>>i>>j;
		if(j>i || j<i-2 || j==i-1)
		{
			cout<<"No Number"<<endl;
		}
		else if(i%2==0 && j%2==0)
		{
			cout<<i+j<<endl;
		}
		else if(i%2!=0 && j%2!=0)
		{
			cout<<i+j-1<<endl;
		}
	}
}
