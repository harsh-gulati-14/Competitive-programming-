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
    {
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll big=(ll)1e15;
        ll ans=big;
        ll c=1;
        while(1)
        {
            ll pw=1,val=0;
            for(i=0;i<n;i++)
            {
                pw*=c;
                if(pw>=(ll)(big))
                {
                    val=-1;
                    break;
                }
                val+=abs(pw-a[i]);
            }
            if(val==-1)
            {
                break;
            }
            ans=min(ans,val);
            c++;    
        }
        cout<<ans;
    }
}
