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
    // cin>>t;
    // while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n&1)
        {
            cout<<n/2<<"\n";
            cout<<a[(n/2)]<<" ";
            for(i=0;i<n/2;i++)
            {
                cout<<a[i]<<" "<<a[(n/2)+i+1]<<" ";
            }
        }
        else{
            cout<<n/2-1<<"\n";
            for(i=0;i<n/2;i++)
            {
                cout<<a[(n/2)+i]<<" "<<a[i]<<" ";
            }
        }
    }
}
