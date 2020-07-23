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
    freopen("output1.txt","w",stdout);
    #endif
    ll i,t,j,k,l,m;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int>> v;
        ll n,x,y;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        ll f=1;
        for(i=0;i<n;i++)
        {
            if(v[i].first<v[i+1].first || v[i].second<v[i+1].second)
            {
                cout<<"NO"<<"\n";
                f=0;
                break;
            }
        }
        if(f)
        {
            ll r=v[0].first;
            ll u=v[0].second;
            while(r--)cout<<"R";
            while(u--)cout<<"U";
            for(i=0;i<n-1;i++)
            {
                r=v[i+1].first-v[i].first;
                while(r-- && r>=0)
                {
                    cout<<"R";
                }
                u=v[i+1].second-v[i].second;
                while(u-- && u>=0)cout<<"U";
            }
            cout<<"\n";
        }

    }
}
