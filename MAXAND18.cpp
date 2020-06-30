
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<ll>
#define pb push_back 
// #define mpa makepair
#define ma map<ll,ll,greater<ll>> 
bool cop(const pair<ll ,ll>& lhs,const pair<ll ,ll>& rhs)
{
    if(lhs.first==rhs.first)
    {
        return lhs.second>rhs.second;
    }
    return lhs.first<rhs.first;
}
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
        ma mp;
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll c=0,p=1;
        vector<pair<ll,ll>> v;
        ll b[30]={0};
        ll f=0;
        ll num;
        while(p<=30)
        {
            num=1<<p-1;
            c=0;
            for(i=0;i<n;i++)
            {
                if(a[i]&num)
                {
                    c++;
                }
            }
            if(pow(2,p-1)*c )
            {
                //mp[pow(2,p-1)*c]=p;
                v.pb(make_pair(pow(2,p-1)*c,p));
            }
            p++;
        }
        sort(v.begin(),v.end(),cop);
         reverse(v.begin(),v.end());
        num=0;
        for(auto x:v)
        {
             // cout<<x.first<<" "<<x.second<<"\n";
        }
        for(i=0;i<k;i++)
        {
            num=num|(1LL<<(v[i].second-1));
        }
        cout<<num<<"\n";
    }
}
