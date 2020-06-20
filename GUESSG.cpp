#include<iostream>
using namespace std;
typedef long long int ll;
void solve()	
{
	ll n;
	cin>>n;
	ll r1=n,r2=n,l1=0,l2=0;
	while(true)
	{
		ll m1=(r1+l1)/2;
		ll m2=(r2+l2)/2;
		char c1,c2;
		cout<<m1<<"\n";
		cin>>c1;
		cout<<m2<<"\n";
		cin>>c2;
		if(l1<=r1)
		{
			if(c1=='E')
			{
				break;
			}
			else if(c1=='G')
			{
				l1=m1+1;
			}
			else{
				r1=m1-1;
			}
		}
		if(l2<=r2)
		{
			if(c2=='E')
			{
				break;
			}
			else if(c2=='G')
			{
				l2=m2+1;
			}
			else{
				r2=m2-1;
			}
		}

	}

}
int main()
{
	solve();
	return 0;
}