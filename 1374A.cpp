#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
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
    ll i,j,k,l,m;
    cin>>m;
    while(m--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        k=floor(n/x)-1;
        l=ceil(n/x);
        ll ans,f=0;
        for(i=k;i<=l;i++)
        {
            ans=((i*x)+y);
            if(((i*x)+y)>n)
            {
                break;
            }
            f=ans;
        }
        //cout<<k<<" "<<l<<"\n";
        cout<<f<<"\n";
    }
}
