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
        ll a,b;
        cin>>a>>b;
        if(a*2<=b)
        {
            cout<<a<<" "<<a*2<<"\n";
        }
        else{
            cout<<-1<<" "<<-1<<"\n";
        }
    }
}
