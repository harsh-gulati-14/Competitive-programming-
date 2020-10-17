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
    // freopen("output.txt","w",stdout);
    #endif
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        ll s=0,u=0;
        u=y*k;
        u+=k;
        ll n=0;
        while(s<=u)
        {
            s+=x;
            s--;
            n++;
        }
        n+=y;
        cout<<n<<"\n";
    }
}
