#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> s;
	long long i=0,j,k,n,s=0,l=0;
	while(l!=15)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>k;
			v.push_back(k);
		}
		sort(v.begin(),v.end());
		for(i=0;i<v.size();i++)
		{
			s.push_back(v[i]*v.size());
		}
		cout<<*max_element(s.begin(),s.end())<<endl;
	}
}
