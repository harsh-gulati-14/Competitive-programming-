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
        ll c=0,s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
            if(a[i]&1)
            {
                c++;
            }
        }
        if((c<=n-1 && c>0) || s&1)
        {
            cout<<"YES"<<"\n";
        }
        else{
         cout<<"NO"<<"\n";   
        }
    }
}
