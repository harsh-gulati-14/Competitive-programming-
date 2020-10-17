// WE JUST NEED TO FIND THE MAXIMUM SUM BETWEEN 2 ARRAYS AND IF SUM OA SINGLE ARRAY IS +VE THEN WE JUST PRINT SUM*K
// ELSE IF SUM OA ASINGLE ARRAY IS -VE WE HAVE TO TAKE A CASE OF 2 ARRYAS CONCAT ONLY 
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
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n*2];
        ll asum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            asum+=a[i];
        }
        for(i=0;i<n*2;i+=n)
        {
            for(j=0;j<n;j++)
            {
                b[j+i]=a[j];
            }
        }
        if(k!=1)
        {
                ll mx=b[0],sum=0;
            for(i=0;i<n*2;i++)
            {
                sum+=b[i];
                mx=max(mx,sum);
                if(sum<0)
                {
                    sum=0;
                }
            }
            if(asum>0)
            {
                mx+=asum*(k-2);
            }
            cout<<mx<<"\n";
        }
        else{
                ll mx=a[0],sum=0;
            for(i=0;i<n;i++)
            {
                sum+=b[i];
                mx=max(mx,sum);
                if(sum<0)
                {
                    sum=0;
                }
            }
            cout<<mx<<"\n";   
        }
    }
}
