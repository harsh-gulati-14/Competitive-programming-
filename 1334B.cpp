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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum=0,c=1;
        ll b[n];
        reverse(a,a+n);
        b[0]=a[0];
        for(i=1;i<n;i++)
        {
            b[i]=a[i]+b[i-1];
        }
        for(i=0;i<n;i++)
        {
            if(b[i]>=k*(i+1))
            {
                continue;
            }
            else{

                break;
            }
        }
        cout<<i<<"\n";
    }
}
