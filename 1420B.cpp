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
        ll c=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                ll p=a[i]&a[j];
                ll q=a[i]^a[j];
                if(p>=q)
                {
                    c++;
                }
            }
        }
        cout<<c<<"\n";

    }
}
