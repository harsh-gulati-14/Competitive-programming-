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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll i,j,k,m,t;
//    cin>>t;
//    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll q;
        cin>>q;
        while(q--)
        {
            vec v;
            ll l,u,p;
            cin>>l>>u>>p;
            ll sum=l;
            i=0;
            while(sum<=n)
            {
                v.pb(a[sum-1]);
                i++;
                sum=l+(u*i);
            }
            for(auto x:v)
            {
            	cout<<x<<" ";
			}
            cout<<"\n";
           if(v.size()>=p)
           cout<<v[p-1]<<"\n";
           else{
               cout<<"So sad"<<"\n";
           }
        }
    }
}
