#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	cin>>l;
	while(l--)
	{
		ll n;
		k=0;
		cin>>n;
		vector<int >v;
		for(i=0;i<n;i++)
		{
			cin>>k;
			v.push_back(k);
		}
		while(k!=1)
		{
			for(i=0;i<v.size();i++)
			{
				v[i]--;
			}
			auto it=find(v.begin(),v.end(),0);
			if(it!=v.end())
			{
				k=1;
			}
			else if(v[v.size()-1]==0)
			{
				k=1;
			}
		}		
		for(auto x:v)
		{
			cout<<x<<" ";
		}
		/*while(v[0]!=0)
		{
			ll m1=*max_element(v.begin(),v.end());
			auto it=find(v.begin(),v.end(),m1);
			ll lo=it-v.begin();
			ll m2=v[0];
			while(m2--)
			{
				for(i=0;i<v.size();i++)
				{
					v[i]--;
				}
			}
		}*/
	}
	return 0;
}
