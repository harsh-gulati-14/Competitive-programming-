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
        double p,q;
        cin>>p>>q;
        p=ceil(p/9);
        q=ceil(q/9);
        if(p==q)
        {
            cout<<1<<" "<<p<<endl;
        }
        else{
            if(p>q)
            {
                cout<<1<<" "<<q<<endl;
            }
            else{
                cout<<0<<" "<<p<<endl;
            }
        }
    }
}
