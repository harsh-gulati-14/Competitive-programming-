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
        ll a[n];
        ma m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(k-a[i]==a[i])
            {
                a[i]=0;
                j=m[a[i]];
                for(ll p=i+1;p<n,j>1;p++,j--)
                {
                    a[p]=1;
                }
                i=i+j-1;
            }
            else if(m[k-a[i]]==1)
            {
                if(m[a[i]]==-1)
                {
                    m[k-a[i]]=-2;
                }
                else
                m[a[i]]=-1;
            }
            else if(m[k-a[i]]>1)
            {
                j=m[a[i]];
                for(ll p=i;p<n,j>0;p++,j--)
                {
                    a[p]=0;
                }   
                i=i+j-1;
            }

        }
        for(i=0;i<n;i++)
        {
            if(m[a[i]]==-1)
            {
                a[i]=0;
            }
            else if(a[i]==-2){
                a[i]=1;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';

    }
}
