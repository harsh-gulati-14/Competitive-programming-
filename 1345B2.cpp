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
        ll n;
        cin>>n;
        l=sqrt(n);
        ll a[l+1];
        a[0]=0;
        a[1]=2;
        a[2]=7;
        for(i=3;i<=l;i++)
        {
            a[i]=a[i-1]+(a[i-1]-a[i-2]+3);
        }
        ll c=0;
        for(i=0;i<=l;i++)cout<<a[i]<<" ";
            cout<<"\n";
        while(n!=1)
        {
            for(i=0;i<=l;i++)
            {
                if(a[i]>n)
                {
                    c++;
                    n=n-a[i-1];
                    break;
                }
            }
        }
        cout<<c<<"\n";
    }
}