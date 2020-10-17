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
#define ma map<char,int> 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        string s,p;
        cin>>s>>p;
        ma m;
        ll alarm=0;
        for(auto x:s)
        {
            m[x]++;
        }
        for(auto x:p)
        {
            m[x]--;
        }
        string d=p;
        char a=d[0];
        for(auto x:m)
        {
            for(i=0;i<x.second;i++)
            {
                cout<<x.first;
            }
            x.second=0;
            if(x.first==a)
            {
                cout<<p;
            }
        }
        cout<<"\n";
        for(auto x:m)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }
        cout<<"\n";
    }
}
 