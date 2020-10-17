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
    // cin>>t;
    // while(t--)
    {
        ll n;
        cin>>n;
        ll a[2*n];
        map<ll,vec> m;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
            m[a[i]].pb(i);
        }
        for(auto x:m)
        {
            cout<<x.first<<" ";
            for(auto c:x.second)
            {
                cout<<c<<" "          ;
            }
            cout<<"\n";
        }
        ll sum=min(m[1][0],m[1][1]);
        if(sum==m[1][0])
        {
            m[1][0]=-1;
        }
        else{
            m[1][1]=-1;
        }
        ll pre=sum;

        for(auto x:m)
        {
            if(x.first!=1)
            {
                ll p0=abs(m[x.first][0]-pre);
                ll p1=abs(m[x.first][1]-pre);
                pre=min(p0,p1);
                sum+=pre;
                pre=min(m[x.first][1],m[x.first][0]);
                if(pre==m[x.first][1])
                {
                    m[x.first][1]=-1;
                }
                else
                {
                    m[x.first][0]=-1;
                }
            }
        }
        pre=0;
        cout<<"\n";
         for(auto x:m)
        {
            cout<<x.first<<" ";
            for(auto c:x.second)
            {
                cout<<c<<" "          ;
            }
            cout<<"\n";
        }
        
        for(auto x:m)
        {
            for(auto c:x.second)
            {
                if(c!=-1)
                {
                    sum+=abs(pre-c);
                    pre=c;
                }
            }
        }
        cout<<sum;
    }
}
