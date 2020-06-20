#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define mp make_pair 
#define ma map<int,int> 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    while(k--)
    {
    	/*ll a,b,c,p,q,r,n;
    	cin>>a>>b>>c;
    	cin>>p>>q>>r;*/
    	vec a,b,a1,a2;
    	for(i=0;i<3;i++)
    	{
    		cin>>l;
    		a.pb(l);
    	}
    	for(i=0;i<3;i++)
    	{
    		cin>>l;
    		b.pb(l);
    	}
    	a1=a;
    	a2=a;
    	l=1;
    	while(l<4)
    	{
	    	ma m1,m2;
			for(i=0;i<3;i++)
			{
				m1[b[i]-a1[i]]++;
				m2[b[i]/a2[i]]++;
			}
			ll p=0,q=0,r=0,s=0;
			for(auto x:m1)
			{
			//	cout<<x.first<<" "<<x.second<<"\n";
				if(p<x.second && x.first!=0)
				{
			//		p=x.second;
					q=x.first;
				}
			}
			for(auto x:m2)
			{
				//	cout<<x.first<<" "<<x.second<<"\n";
				if(r<x.second && x.first!=1)
				{
			//		r=x.second;
					s=x.first;
				}
			}
			for(i=0;i<3;i++)
			{
				if(b[i]-a1[i]>=q)
				{
					a1[i]+=q;
				}
			}
			 //cout<<r<<s<<"\n";
			for(i=0;i<3;i++)
			{
				if(b[i]/a2[i]>=s)
				{
					a2[i]=a2[i]*s;
				}
			}
			for(i=0;i<3;i++)
			{
				if(a1[i]==a[i])
				{
					a2=a1;
					break;
				}
			}
			if(a1==b || a2==b)
			{
				break;
			}
			l++;
			for(auto x:a1)
			{
				cout<<x;
			}
			cout<<"\n";
			for(auto x:a2)
			{
				cout<<x;
			}
		  cout<<" "<<l<<"\n";
		}
		cout<<l<<"\n";
    }
		
}