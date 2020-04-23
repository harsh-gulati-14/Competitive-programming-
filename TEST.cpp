#include<iostream>
using namespace std;
int main()
{
	int n=0,i=0,j;
	int a[10000];
	do{
		cin>>n;
		a[i]=n;
		i++;
	}while(n!=42);
	for(j=0;j<i-1;j++)
	{
		cout<<a[j]<<endl;
	}
}
