#include<iostream>
#include<bits/stdc++.h>
#include <stdio.h>
#include<map>
#include<vector>
#include <cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
typedef  int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n>8)
        {
            ll pre=0;
            ll cur=0;
            ll f=0;
            k=n;
            for(i=2;i<sqrt(k);i++)
            {
                if(n%i==0)
                {
                    if(pre==0)
                    {
                        pre=i;
                    }
                    else if(i!=pre)
                    {
                        cur=i;
                    }
                    n=n/i;
                }
                if(pre!=0 && cur!=0 && pre!=n && cur!=n && n>=2)
                {
                    f=1;
                    printf("YES\n");
                    printf("%d %d %d\n",pre,cur,n);
                    break;
                }
            }
            if(f==0)
            printf("NO\n");
        }
        else
        printf("NO\n");
    }
}
