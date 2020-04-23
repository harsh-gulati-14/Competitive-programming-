#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	vector<int> v;
	cin>>l;
	while(l--)
	{
		int c=1;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>k;
			v.push_back(k);
		}
		for(i=1;i<n;i++)
		{
			if(v[i]>v[i+1])
			c++;
		}
		cout<<c;
	}
}
