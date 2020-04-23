#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l,a=1,b=2,c=3;
	while(a!=b && b!=c)
	{
		cin>>a>>b>>c;
		ll d=0,e=0,f=0;
		ll p=0,q=0,r=0;
		if(a!=b && b!=c )
		{
			if(a!=0 && b!=0 &&c!=0)
			{
					p=b/a;
					q=c/b;
			}
		d=b-a;
		e=c-b;
		if(d==e)
		{
			cout<<"AP "<<c+d<<endl;
		}
		else if(p==q){
			cout<<"GP "<<c*p<<endl;
		}
	}
	}
}
