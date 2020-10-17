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
     ll a[21]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576};
    while(t--)
    {
        ll  n;
        cin>>n;
        cout<<1<<" "<<a[20];
        ll sum;
        cin>>sum;
        sum=sum-(a[20]*n);
        ll xor1=0;
        if(sum&1)
        {
            xor++;
        }
        ll user=0,given;
        for(i=1;i<20;i++)
        {   
            user=sum+(a[i]*n);
            cout<<1<<" "<a[i]<<"\n";
            cin>>given;
            if(((user-given)/(a[i]*2))&1)
            {
                xor=xor+a[i];
            }
        }
        cout<<2<<" "<<xor<<"\n";
        cout<<"\n";
        ll out;
        cin>>out;
    }
}
