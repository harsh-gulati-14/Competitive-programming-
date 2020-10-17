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
        if(n%3==0)
        {
            cout<<n/3<<" "<<0<<" "<<0<<"\n";
            continue;
        }
        if(n%5==0)
        {
            cout<<0<<" "<<n/5<<" "<<0<<"\n";
            continue;
        }
        if(n%7==0)
        {
            cout<<0<<" "<<0<<" "<<n/7<<"\n";
            continue;
        }
        if(n<5)
        {
            cout<<-1<<"\n";
            continue;
        }
        if(n%3==1)
        {
            cout<<(n-10)/3<<" 2 0"<<'\n';
        }
        else{
            cout<<(n-5)/3<<" 1 0"<<'\n';
        }
    }
}
