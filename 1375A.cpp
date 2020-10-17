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
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i+=2)
        {
            if((a[i]-a[i-1]<0 && a[i+1]-a[i]<0) || (a[i]-a[i-1]>0 && a[i+1]-a[i]>0))
            {
                if(a[i]>0)
                {
                    a[i]=-a[i];
                }
                else{
                    a[i]=+a[i];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
}
