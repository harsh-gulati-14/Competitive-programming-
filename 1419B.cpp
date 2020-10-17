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
        k=ceil(log(n));
        j=1;
        ll a[k+1];
        a[0]=1;
        for(i=0;i<k;i++)
        {
            a[i]=(j*(j+1))/2;
            j+=2;
        }
        ll sum=0;
        for(i=0;i<k;i++)
        {
            cout<<a[i]<<" ";
            sum+=a[i];
        }
        cout<<'\n';
    }
}
