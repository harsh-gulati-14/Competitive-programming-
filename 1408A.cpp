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
        ma m;
        vec a,b,c;
        for(i=0;i<n;i++)
        {
            cin>>k;
            a.pb(k);
        }
        for(i=0;i<n;i++)
        {
            cin>>k;
            b.pb(k);
        }
        for(i=0;i<n;i++)
        {
            cin>>k;
            c.pb(k);
        }
        cout<<a[0]<<" ";
        k=a[0];
        for(i=1;i<n-1;i++)
        {
            if(a[i]!=k)
            {
                k=a[i];
                cout<<a[i]<<" ";
            }
            else{
                if(k!=b[i])
                {
                    k=b[i];
                    cout<<b[i]<<" ";
                }
                else{
                    k=c[i];
                    cout<<c[i]<<" ";   
                }
            }

        }
        if(a[n-1]!=a[0] && k!=a[n-1])
        {
            cout<<a[n-1]<<"\n";
        }
        else{
                if(a[0]!=b[n-1] && k!=b[n-1])
                {
                    k=b[i];
                    cout<<b[i]<<"\n";
                }
                else{
                    k=c[i];
                    cout<<c[i]<<"\n";   
                }
            }
    }
}
