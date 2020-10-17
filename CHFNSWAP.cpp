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
        ll s=(n*(n+1))/2;
        ll ans=0;
        double tempans=s/2,sol,decimal,inte;
        if(s&1)
        {
            ans=0;
        }
        else{
            sol=(sqrt(8*tempans+1)/2)-0.5;
            decimal=modf(sol,&inte);
            ll final=(ll)sol;
            if(decimal==0)
            {
                ans=((final-1)*(final))/2+((n-final-1)*(n-final))/2 ;
            }
            ans=ans+n-final;
        }
        cout<<ans<<'\n';
    }
}
