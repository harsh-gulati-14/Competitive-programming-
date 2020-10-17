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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll g=0;
        if(a[0]==b[0])
        {
            for(i=n-1;i>0;i--)
            {
                if(a[i]!=b[i])
                {
                    ll f=0;
                    ll cal=b[i]-a[i];
                    if(cal>0)cal=1;
                    else cal=-1;
                    for(j=0;j<i;j++)
                    {
                        if(a[j]==cal)
                        {
                            f=1;
                            continue;
                        }
                    }
                    if(!f)
                    {
                        g=1;
                        break;
                    }
                }
            }
        }
        else{
            g=1;
        }
        if(g)
        {
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}
