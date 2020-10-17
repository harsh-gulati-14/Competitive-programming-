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
ll solve(ll n)
{
    ll ans=INT_MAX;
    for(ll i=1;i*i<n;i++)
    {
        ans=min(ans,i-1+((n-i)+i-1)/i);
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    #endif
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n>1)
        cout<<solve(n)<<"\n";
        else
            cout<<0<<"\n";
    }
}
