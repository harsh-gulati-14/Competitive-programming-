#include<iostream>
#include<map>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<ll>
#define pb push_back 
#define ma map<int,int> 
bool sortinrev(const pair<ll,ll> &a,  
               const pair<ll,ll> &b) 
{ 
       return (a.first > b.first); 
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
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll ci=0,firstone,lastone;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                firstone=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                lastone=i;
                break;
            }   
        }
        vector<pair<ll,ll>> v;
        vec c;
        if(firstone==lastone && (lastone==n-1 || lastone==0))
        {
            cout<<0<<"\n";
        }
        else{
                for(i=firstone;i<=lastone;i++)
            {
                if(s[i]=='0')
                {
                    j=i+1;
                    ci=0;
                    while(j<=lastone && s[j]=='0')
                    {
                        ci++;
                        j++;
                    }
                    v.pb(make_pair(ci+1,1));
                    c.pb(ci+1);
                    i=j-1;
                }
            }
            if(firstone)
            v.pb(make_pair(firstone,0));
            if(n-lastone-1)
            v.pb(make_pair(n-lastone-1,0));
            ll cut=0;
            vec o;
            sort(v.begin(),v.end(),sortinrev);
            ll sum=0;
            for(auto x:v)
            {
                sum+=x.first;
            }
            for(auto x:v)
            {
                if(x.second==0 && k>=1)
                {
                     sum-=x.first;
                    cut++;
                    k--;
                }
                else if(x.second==1 && k>=2){
                    cut++;
                    sum-=x.first;
                    k-=2;
                }
            }
           cout<<sum<<"\n";
        }
    }
}
