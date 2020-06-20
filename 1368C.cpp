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
    vector<pair<ll,ll>> v;
    v.pb({0,0});
    v.pb({1,0});
    v.pb({0,1});
    v.pb({1,1});
    while(k--)
    {
        ll x=v.back().first;
        ll y=v.back().second;
        v.pb({x+1,y});
        v.pb({x,y+1});
        v.pb({x+1,y+1});
    }
    cout<<v.size()<<"\n";
    for(auto c:v)
    {
        cout<<c.first<<" "<<c.second<<"\n";
    }
}
