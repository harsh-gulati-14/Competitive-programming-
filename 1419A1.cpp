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
        ll ro=0,be=0;
        ll n;
        cin>>k;
        cin>>n;
        vec v;
        while(n>0)
        {
            ll d=n%10;
            v.pb(d);
            n=n/10;
        }
        for(i=0;i<v.size();i++)
        {
            if(((i+1)&1) && v[i]&1)
            {
                ro++;
            }
            else if((((i+1)%2==0) && v[i]%2==0)){
                be++;
            }
        }
        if(k&1)
        {
            if(k&1 && ro>0)
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<"\n";
            }
        }
        else
        {
            if(k%2==0 && be>0)
            {
                cout<<2<<"\n";
            }
            else{
                cout<<1<<"\n";
            }
    }
    }
}
