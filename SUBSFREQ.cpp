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
#define ull unsigned long long int
#define MODULO 1000000007
ull PowMod(ull n)
{
    ull ret = 1;
    ull a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % MODULO;
        a = a * a % MODULO;
        n >>= 1;
    }
    return ret;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ull i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        ull a[n];
        for(i=0;i<n;i++)cin>>a[i];
        ull p=PowMod(n);
        cout<<p-1<<" ";
        for(i=0;i<n-1;i++)
        {
            cout<<0<<" ";
        }
        cout<<"\n";
    }
}
