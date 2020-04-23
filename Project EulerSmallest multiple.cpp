#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	return gcd(b, a % b); 
} 
int main()
{
	ll i,j,k,l;
	vector<int >v;
	cin>>l;
	while(l--)
	{
		ll a,b,c,n;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			v.push_back(i);
		}
		b=v[0];
		for(i=1;i<v.size();i++)
		{
			b = (((v[i] * b)) / 
				(gcd(v[i], b))); 
		}
		cout<<b<<"\n";
	}
	return 0;
}
