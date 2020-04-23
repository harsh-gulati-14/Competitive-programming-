#include<iostream>
using namespace std;
int main()
{
	int i,j,c=0,l,n,a[20],b[20],m;
	cin>>l;
	while(l--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		for(i=0;i<m;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
		    {
			if(b[i]==a[j])
			{
				c++;
			}
			}
		}
		if(c==m){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
