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
        ll a[n],b[n],ai[n]={0},bi[n]={0};
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        ll p,q;
        p=*min_element(a,a+n);
        q=*min_element(b,b+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>p)
            {
                ai[i]=a[i]-p;
            }
            if(b[i]>q)
            {
                bi[i]=b[i]-q;
            }
        }
        ll s=0;
        for(i=0;i<n;i++)
        {
            s+=max(ai[i],bi[i]);
        }
        cout<<s<<"\n";
    }
}

