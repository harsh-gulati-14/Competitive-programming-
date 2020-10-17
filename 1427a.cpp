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
        ll a[n];
        ll s=0,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
            if(a[i]==0)
            {
                c++;
            }
        }
        if(s)
        {
            ll f=0;
            f=a[0];
            sort(a,a+n,greater<ll>());
            for(i=1;i<n;i++)
            {
                if(a[i]!=0)
                f+=a[i];
                // cout<<f</<" ";
                if(f==0)
                {
                    break;
                }
            }
            if(f==0)
            {
                cout<<"NO\n";
                continue;
            }
            cout<<"YES"<<"\n";
            for(i=0;i<n;i++)
            {
                if(a[i]!=0)
                    cout<<a[i]<<" ";
            }
            for(i=0;i<c;i++)
            {
                cout<<0<<" ";
            }
            cout<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
