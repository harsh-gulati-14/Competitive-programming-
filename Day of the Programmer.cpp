
#include<iostream>
using namespace std;
int main()
{
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	long i,j,k,l,year;
	cin>>year;
	if(year%400==0)
	{
	   cout<<12<<"."<<"09."<<year;
	}
	else if(year%4==0 && year%100!=0)
	{
		cout<<12<<"."<<"09."<<year;
	}
	else if(year%100==0){
		cout<<13<<"."<<"09."<<year;
	}
}
