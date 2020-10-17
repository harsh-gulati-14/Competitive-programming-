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
        ll a[64][64];
        ll sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=n-1;i>0;i--)
        {
            if(a[0][i]!=i+1)
            {
                sum++;
                for(j=0;j<=i;j++)
                {
                    for(k=j+1;k<=i;k++)
                    {
                        a[j][k]=a[j][k]+a[k][j];
                        a[k][j]=a[j][k]-a[k][j];
                        a[j][k]=a[j][k]-a[k][j];
                    }
                }
            }
        }
        cout<<sum<<"\n";

    }
}
