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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll a[n],prefix[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        prefix[0]=a[0];
        for(i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+a[i];
        }
        ll ans[n]={0};
        ll sum=0;
        i=1;
        while(sum<=s && i<n)
        {
            sum+=a[i];
            i++;
        }
        // cout<<i<<" "<<sum<<"\n";
        if(sum<=s)
        ans[0]=i-1;
        else
            ans[0]=i-2;
        sum=0;
        ll f=0;
        for(i=1;i<n;i++)
        {
            f=0;
            j=i+1;
            sum=prefix[i-1];
            while(s>=sum && j<n)
            {
                f=1;
                sum=sum+a[j];
                j++;
            }
            // cout<<j<<" "<<sum<<"\n";
            if(f)
            {
                if(sum-a[j-1]<=s)
            ans[i]=j-1;
            else
                a[i]=j-2;
            }
            else{
                a[i]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        ll pos=0;
        ll mai=0;
        for(i=0;i<n;i++)
        {
            if(ans[i]>mai)
            {
                mai=ans[i];
                pos=i;
            }
        }
        if(ans[pos])
        cout<<pos+1<<"\n";
        else
            cout<<pos<<"\n";
    }
}
