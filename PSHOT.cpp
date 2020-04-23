#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	cin>>l;
	while(l--)
	{
		ll a=0,b=0,c=0,n;
		string s;
		cin>>n;
		cin>>s;
		for(i=0;i<2*n;i++)
		{
			if(i%2==0 && s[i]=='1')
			{
				a++;
			}
			else if(i%2!=0 && s[i]=='1')
			{
				b++;	
			}
			if(a>n/2 || b>n/2)
			{
				cout<<i+1<<"\n";
				break
			}
		}
	}
	return 0;
}
