#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l,n;
	cin>>l;
	while(l--)
	{
		cin>>n;
		vector<int> v;
		for(i=1;i<=n;i++)
		{
			v.push_back(i);
		}
		if(n&1)
		{
			j=v[n-1];
			cout<<n/2<<endl;
			for(i=0;i<n-1;i=i+2)
			{
				if(i==0)
				{cout<<3<<" "<<v[i]<<" "<<v[i+1]<<" "<<j<<endl;}
				else
				cout<<2<<" "<<v[i]<<" "<<v[i+1]<<endl;
			}
		}
		else{
			cout<<n/2<<endl;
			for(i=0;i<n;i=i+2)
			{
				cout<<2<<" "<<v[i]<<" "<<v[i+1]<<endl;
			}
		}	
	}
	return 0;
}
