#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>l;
	while(l--)
	{
		ll a,b,c=0,n,k,q;
		vector<int >v;
		vector<int >v1;
		vector<int >v2;
		cin>>n>>k>>q;
		for(i=0;i<n;i++)
		{
			cin>>k;
			v.push_back(k);
		}
		if(n%k==0)
		{
			for(i=0;i<n;i=i+(n/k))
			{
				for(j=i;j<i+(n/k);j++)
				{
					v1.push_back(v[i]);
				}
				if(*max_element(v1.begin(),v1.end())<q)
				{
					c++;	
				}
			}
			cout<<c<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
