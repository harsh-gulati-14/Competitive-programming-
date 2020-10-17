#include<iostream>
#include<map>
#include <bits/stdc++.h>
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
        ll n;
        cin>>n;
        vec a,b;
        for(i=0;i<n;i++)
        {
            cin>>k;
            if(k>=0)
            {
                a.pb(k);
            }
            else b.pb(k);
        }
        vec c=b;
        sort(c.begin(),c.end(),greater<> ());
        ll s=1;
        if(a.size()==0)
        {
            for(i=0;i<5;i++)
            {
                s*=c[i];
            }
            cout<<s<<"\n";
            continue;
        }
        sort(b.begin(),b.end());
        for(auto x:b)
        {
            // cout<<x<<" ";
        }
        ll p=b.size();
        ll k=0;
        while(k<p&&k<4)
        {
            a.pb(abs(b[k]));
            cout<<abs(b[k]);
            k++;
        }
        sort(a.begin(),a.end(),greater<> ());
         for(auto x:a)
        {
            cout<<x<<" ";
        }
        for(i=0;i<5;i++)
        {
            s*=a[i];
        }
        cout<<s<<"\n";
    }
}
