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
        ll n; cin>>n;
        if(n==2)
        {cout<<2<<"\n"<<"1 2"<<"\n"; continue; }
        ll x1=n-2;
        ll x2=n-1;
        ll x3=n;
        cout<<2<<'\n';
        while(x1)
        {
            if((x2+x3)%2)
            {
                cout<<x1<<" "<<x3<<endl;
                x1--;
                x3=x2;
            }
            else{
                cout<<x2<<" "<<x3<<endl;
                x3=(x3+x2)/2;
                x2=x1;
                x1--;
            }
        }
        cout<<x2<<" "<<x3<<endl;


    }
}
