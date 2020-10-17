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
        ll n,k;
        cin>>n>>k;
        ll a[(ll)n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll left=0,f=0;
        for(i=0;i<n;i++)
        {
            if(a[i]+left>=k)
            {
                left+=a[i]-k;
            }
            else if(left+a[i]<k){
                f=1;
                cout<<i+1<<"\n";
                break;
            }
        }
        ll p=left/k;
        if(f==0)
        {
            if(left!=0)
            cout<<(p)+1+n<<"\n";
            else
            cout<<n+1<<"\n";
        }
    }   
}
