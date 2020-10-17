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
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vec v;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                ll c=1;
                j=i+1;
                while(a[j]==0 && j<n)
                {
                    c++;
                    j++;
                }
                v.pb(c);
                i=j-1;
            }
        }
        sort(v.begin(),v.end(),greater<> ());
        ll p=v[0];
        cout<<p;
        if(1)
        {
            cout <<"Yes"<<"\n";
            // if(v[0]==1)       
            // {
            //     if(v.size()>1)
            //     {
            //         cout <<"No"<<"\n";
            //     }
            //     else
            //     {
            //         cout <<"Yes"<<"\n";
            //     }
            // }
            // else
            //     {
            //         cout <<"No"<<"\n";
            //     }
        }
        else
        {
            // if(v[0]%2==0)
            // {
            //     cout <<"Yes"<<"\n";
            // }
            // else
            // {
            //     if(v[1]>v[0]/2)
            //     {
            //         cout <<"No"<<"\n";
            //     }
            //     else
            //     {
            //         cout <<"Yes"<<"\n";
            //     }
            // }
            cout <<"Yes"<<"\n";
        }
    }
}
