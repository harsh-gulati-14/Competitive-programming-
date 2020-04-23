#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j=0,k,l;
	char a[100000];
	cin>>l;
	while(l--)
	{
		cin>>a;
		k=strlen(a);
		for(i=0;i<k-2;i++)
		{
			if((a[i]=='0' && a[i+1]=='1' && a[i+2]=='0') || (a[i]=='1' && a[i+1]=='0' && a[i+2]=='1'))
			{
				j=1;
				break;
			}
			else{
				j=0;
			}
		}
		if(j==1)
		{
			cout<<"Good"<<endl;
		}
		else{
			cout<<"Bad"<<endl;
		}
	}
}
