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
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vec ai,aj;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                ai.pb(i);
            }
            else{
                aj.pb(i);
            }
        }
        j=0;
        for(i=0;i<ai.size();i++)
        {
            j=0;
            while(a[ai[i]]!=0)
            {
                if(j==aj.size())
                {
                    break;
                }
                if(a[aj[j]]==0)
                {
                    j++;
                    continue;
                }
                if(ai[i]<aj[j])
                {
                    if(a[ai[i]]>abs(a[aj[j]]))
                    {
                        a[ai[i]]-=abs(a[aj[j]]);
                        a[aj[j]]=0;
                    }
                    else{
                        a[aj[j]]+=a[ai[i]];
                        a[ai[i]]=0;
                    }
                }
                j++;
            }
        }
        ll sum=0;
            for(i=0;i<n;i++)
            {
                sum+=abs(a[i]);
            }
            cout<<sum/2<<"\n";
    }
}
