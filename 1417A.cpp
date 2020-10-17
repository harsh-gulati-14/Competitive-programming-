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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll p=*min_element(a,a+n);
        for(i=0;i<n;i++)
        {
            if(p==a[i])
            {
                j=i;
                break;
            }
        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if(i!=j)
            {
                sum=sum+((k-a[i])/p);
            }
        }
        cout<<sum<<"\n";
    }
}
