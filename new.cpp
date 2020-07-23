//1.we have to first chekc the numbers that are present 

#include <bits/stdc++.h>  
//. next make a single map of numbers
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back
#define mp make_pair 
#define ma map<ll,ll> 
bool comp(const pair<int,int> &a, 
              const pair<int,int> &b) 
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
    ll i,j,k,l,m;
    cin>>m;
    while(m--)
    {
        ma m1,m2,m3;
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            m1[a[i]]++;
            m2[b[i]]++;
            m3[a[i]]++;
            m3[b[i]]++;
        }
        ll f=1;
        for(auto x:m3)
        {
            if(x.second&1)
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(auto x:m1)
            {
                ll r=m1[x.first];
                if(m1[x.first]>m2[x.first])
                {
                    m1[x.first]-=m2[x.first];
                    m2[x.first]=0;
                }
                else if(m1[x.first]<m2[x.first])
                {
                    m2[x.first]-=m1[x.first];
                    m1[x.first]=0;
                }
                else{
                    m1[x.first]=0;
                    m2[x.first]=0;
                }
            }
            ll p1,p2,s1=0,s2=0,s=0;
            p1=*min_element(a,a+n);
            p2=*min_element(b,b+n);
            p1=min(p1,p2);
        }
        for(auto x:m1)
        {
            // cout<<x.first<<" "<<x.second<<"\n";
        }
        // cout<<"\n";
        for(auto x:m2)
        {
            // cout<<x.first<<" "<<x.second<<"\n";
        }
    }
}