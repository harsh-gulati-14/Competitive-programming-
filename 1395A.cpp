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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        ll ce=0;
        ll co=0;
        if(r&1){ co++;}
        else ce++;
        if(w&1){ co++;}
        else ce++;
        if(b&1){ co++;}
        else ce++;
        if(g&1){ co++;}
        else ce++;
        if(co>1)
        {
            
        }
    }
}
