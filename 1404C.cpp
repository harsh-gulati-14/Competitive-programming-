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
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
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
        ll b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        vec v;
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                v.pb(a[i]);
            }
        }
        ll mi=*min_element(a,a+n);
        ll f=1;
        for(auto x:v)
        {
            if(x%mi!=0)
            {
                cout<<"NO\n";
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<"\n";
        }
    }
}
