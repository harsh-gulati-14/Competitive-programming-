
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
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
        	ll a,b,c,d;
        	cin>>a>>b>>c>>d;
        	ll v[d+1]={0};
        	for(i=a;i<=b;i++)
        	{
        		v[i+b]++;
        		v[i+c+1]--;
        	}
        	for(i=1;i<=1500006;i++)
        	{
        		v[i]=v[i]+v[i-1];
        	}
        	for(i=1500006;i>=1;i--)
        	{
        		v[i-1]+=v[i];
        	}
        	ll ans=0;
        	for(i=c;i<=d;i++)
        	{
        		ans+=v[i+1];
        	}
        	cout<<ans<<"\n";
    }
}