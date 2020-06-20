#include<iostream>
#include<map>
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
        ll n,x,m;
        cin>>n>>x>>m;
        ll w=n;
        ll y=-1;
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            w=min(min(a,b),w);
            y=max(max(a,b),y);
            if(x>=w && x<=y)
            {
                continue;
            }
            else{
                w=n;y=-1;
            }
        }
        cout<<y<<"\n";
}
}
