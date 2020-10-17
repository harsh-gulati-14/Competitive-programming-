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
        ll n,s;
        cin>>n;
        ll a[n];
        ll f=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                s=a[i]+a[j];
                for(k=j+1;k<n;k++)
                {
                    if(s<a[k])
                    {
                        f=0;
                        cout<<i<<" "<<j<<" "<<k<<"\n";
                        break;
                    }
                }
                if(f==0)
                {
                    break;
                }
            }
                if(f==0)
                {
                    break;
                }
        }
        if(f)
        {
            cout<<-1<<"\n";
        }
    }
}
