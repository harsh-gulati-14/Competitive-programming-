#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<int> v1;
    vector<int> v2;
    ll i,j,k,l,a,b,m,n,s,t;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        cin>>j;
        j=j+a;
        if(j>=s && j<=t)
        v1.push_back(j);
    }
    for(i=0;i<n;i++)
    {
    	cin>>j;
    	j=j+b;
    	if(j>=s && j<=t)
    	v2.push_back(j);
	}
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}
