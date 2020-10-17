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
        string s;
        cin>>s;
        ll x;
        cin>>x;
        ll n=s.length();
        char w[n],s1[n];
        for(i=0;i<n;i++)
        {
            if(i+x<n)
            {
                w[i+x]=s[i];
            }
            if(i-x>=0)
            {
                w[i-x]=s[i];
            }
            else{
                w[i]='0';
            }
        }
        for(i=0;i<n;i++)
        {
            if(i+x<n && w[i+x]=='1')
            {
               s1[i]=w[i+x];
            }
            else if(i-x>=0 && w[i-x]=='1')
            {
               s1[i]=w[i-x];
            }
            else{
                s1[i]='0';
            }
        }
        for(i=0;i<n;i++)
            {
                // cout<<s1[i];
            }
            // cout<<'\n';
        ll f=0;
        for(i=0;i<n;i++)
        {
            if(s1[i]!=s[i])
            {
                f=1;
                break;
            }
        }
        if(!f)
        {
            for(i=0;i<n;i++)
            {
                cout<<w[i];
            }
            cout<<'\n';
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
