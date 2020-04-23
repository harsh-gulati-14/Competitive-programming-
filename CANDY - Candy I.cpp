#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l=0;
	while(l!=-1)
	{
		cin>>l;
		ll s=0;
		k=l;
		vector<int> v;
		while(k>0)
		{
			cin>>j;
			v.push_back(j);
			k--;
		}
		if(l>-1)
		{
		s=accumulate(v.begin(), v.end(), 0);
		sort(v.begin(),v.end());
		ll f=0,p,c;
		p=s/v.size();
		vector<int> v1;
		if(s%v.size()==0)
		{
			for(i=0;i<v.size();i++)
			{
				v[i]=v[i]-p;
				if(v[i]>0)
				{
					f=f+v[i];
				}
			}
			cout<<f<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	}
	return 0;
}
