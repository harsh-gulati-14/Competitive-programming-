#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,j,k,l,x,n;
	vector<long> v;
	vector<long> v1;
	cin>>l;
	while(l--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>k;
			v.push_back(k);
		}
		v1=v;
		long p=1;
		for(i=0;i<n;i++)
		{
			p=v[i];
			for(j=i+1;j<n;j++)
			{
				p=p*v[j];
				v1.push_back(p);
			}
		}
		auto end = v2.end();
		for (auto it = v2.begin(); it != end; ++it) {
			end = std::remove(it + 1, end, *it);
		}
	
		v2.erase(end, v2.end());
			int d,c=0;
		for(i=0;i<v2.size();i++)
		{
			d=sqrt(v2[i])+1;
			for(j=d;j>0;j--)
			{
				for(k=d;k>=0;k--)
				{
					if(pow(j,2)-pow(k,2)==v2[i])
					{
						c++;
					}
				}
			}
		}
		cout<<c<<endl;
	}
}











