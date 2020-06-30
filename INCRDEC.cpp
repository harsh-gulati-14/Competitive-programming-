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
        ma p;
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            p[a[i]]++;
        }
        ll f=1;
        ll ml=*max_element(a,a+n);
        if(p[ml]!=1)
        {
            f=0;
        }
        for(auto x:p)
        {
            if(x.second>2)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<"\n";
            for(auto &x:p)
            {
                x.second--;
                cout<<x.first<<" ";
            }
            vec v;
            for(auto x:p)
            {
                if(x.second==1)
                {
                    v.pb(x.first);
                }
            }
            reverse(v.begin(),v.end());
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}

