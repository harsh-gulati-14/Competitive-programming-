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
        ll n,s;
        cin>>n;
        ll a[n];
        ll f=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]+a[1]>a[n-1])
        {
            cout<<-1<<"\n";
        }
        else{
            cout<<1<<" "<<2<<" "<<n<<"\n";
        }
    }
}
