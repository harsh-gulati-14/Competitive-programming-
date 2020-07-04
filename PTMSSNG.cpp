#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<ll,ll> 
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
        ma mx,my;
        ll n;
        cin>>n;
        n=(4*n)-1;
        while(n--)
        {
            ll x,y;
            cin>>x>>y;
            mx[x]++;
            my[y]++;
        }
        for(auto x:mx)
        {
            if(x.second&1)
            {
                cout<<x.first<<" ";
            }
        }
        for(auto x:my)
        {
            if(x.second&1)
            {
                cout<<x.first<<"\n";
            }
        }

    }
}
