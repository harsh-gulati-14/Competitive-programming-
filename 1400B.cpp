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
        ll p,f;
        cin>>p>>f;
        ll cs,cw,s,w;
        cin>>cs>>cw>>s>>w;
        ll dp1[cs+1][cw+1];
        ll dp2[cs+1][cw+1];
        for(i=0;i<=cs;i++)
        {
            for(j=0;j<=cw;j++)
            {
                if(i*s+j*w<=p)
                dp1[i][j]=i*s+j*w;
                else
                    dp1[i][j]=0;
            }
        }
        for(i=0;i<=cs;i++)
        {
            for(j=0;j<=cw;j++)
            {
                if(i*s+j*w<=f)
                dp2[i][j]=i*s+j*w;
                else
                    dp2[i][j]=0;
            }
        }
        ll m1=0,m2=0;
        ll a1,a2,b1,b2;
        for(i=0;i<=cs;i++)
        {
            for(j=0;j<=cw;j++)
            {
                if(dp1[i][j]>0)
                {
                    if(i+j>m1)
                    {
                        a1=i;
                        b1=j;
                        m1=i+j;
                    }
                }
                // cout<<dp1[i][j]<<" ";
            }
            // cout<<endl;
        }
        for(i=0;i<=cs;i++)
        {
            for(j=0;j<=cw;j++)
            {
                if(dp2[i][j]>0)
                {
                    if(i+j>m2)
                    {
                        a2=i;
                        b2=j;
                        m2=i+j;
                    }
                }
            }
        }
        if(m1==cs+cw || m2==cs+cw)
        {
            cout<<m1<<"\n";
        }
        else{
            cout<<m1+m2<<"\n";
        }
    }
}
