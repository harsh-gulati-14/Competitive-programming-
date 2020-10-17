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
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        ll f=0;
       if(n>1)
       {
            if(a[0]>=b[0])
            {
             for(i=1;i<n;i++)
            {
                if(a[i]>=b[i])
                {
                    if(a[i]>=a[i-1] && b[i]>=b[i-1])
                    {
                        continue;
                    }
                    else{
                        f=1;
                        break;
                    }
                }
                else{
                    f=1;
                    break;
                }
            }
        }
        else f=1;
       }
        else{
            if(a[0]<b[0])
            {
                f=1;
            }
        }
        if(f)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
    }

}
