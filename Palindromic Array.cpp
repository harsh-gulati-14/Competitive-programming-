#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	} 
}
int PalinArray(int a[], int n)
{  
int i,j=0,k=0,l=0,d=0;
for(i=0;i<n;i++)
{
	k=a[i];
	l=k;
	while(l>0)
        {
            d=l%10;
            j=j*10+d;
            l=l/10;
        }
        if(k!=j)
        {
        	return 0;
		}
}
return 1;
}
