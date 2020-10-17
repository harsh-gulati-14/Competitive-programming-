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
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    #endif
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,y;
        vec v;
        cin>>n>>k>>x>>y;
        v.pb(x);
        j=(x+k)%n;
        while(j!=x)
        {
            v.pb(j);
            j=(j+k)%n;
        }
        ll f=0;
        for(i=0;i<v.size();i++)
        {
            if(v[i]==y)
            {
                f=1;
                cout<<"YES"<<"\n";
                break;
            }
        }
        if(!f)
        {
            cout<<"NO"<<"\n";
        }
    }
}
