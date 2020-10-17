
#include<map>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<ll,ll> 
bool cmp(pair<ll,ll>& a,pair<ll,ll>& b) 
{ 
    return a.second > b.second; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    // cin>>t;
    // while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ma m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        vector<pair<ll,ll> > v;
        for(auto& x:m)
        {
            v.pb(x);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v)
        {
            // cout<<x.first<<" "<<x.second<<"\n";
        }
        ll q;
        cin>>q;
        while(q--)
        {
            ll p,f=0;
            char y;
            cin>>y>>p;
            if(y=='+')
            {
                for(auto &x:v)
                {
                    if(x.first==p)
                    {
                        f=1;
                        x.second++;
                    }
                }
                if(f==0)
                {
                    v.pb(make_pair(p,1));
                }
            }
            else if(y=='-')
            {
                for(auto &x:v)
                {
                    if(x.first==p)
                    {
                        x.second--;
                    }
                }
            }
            sort(v.begin(),v.end(),cmp);
        //     for(auto x:v)
        // {
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
            if(v.size()>=3)
            {
               if((v[0].second>=4 && v[1].second>=2 && v[2].second>=2) || (v[0].second>=6 && v[1].second>=2 ) || (v[0].second>=4 && v[1].second>=4 ))
               {
                    cout<<"YES"<<"\n";
               }
               else{
                    cout<<"NO"<<"\n";
               }
            }
            else if(v.size()==2){
                 if((v[0].second>=6 && v[1].second>=2 ) || (v[0].second>=4 && v[1].second>=4 ))
               {
                    cout<<"YES"<<"\n";
               }
               else{
                    cout<<"NO"<<"\n";
               }   
            }
            else{
                if(v[0].second>=8)
                 {
                    cout<<"YES"<<"\n";
               }
               else{
                    cout<<"NO"<<"\n";
               }   
            }
        }
    }
}
