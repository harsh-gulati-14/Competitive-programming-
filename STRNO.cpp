#include<bits/stdc++.h>
using namespace std;
int checkprime()
{
	
}
int main()
{
	long long i,j,k,l,m=1000000000,x;
	cin>>l;
	while(l--)
	{
		cin>>x>>k;
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i%j==0)
				{
					cout<<j;
				}
			} 
		}
	}
	
}
