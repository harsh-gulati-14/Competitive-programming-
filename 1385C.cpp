#include<iostream>
#include<map>
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
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m;
    cin>>m;
    while(m--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll p=n-1;
        while(p>0 && a[p]<=a[p-1])
        {
            p--;
            // to get the suffix increasing from  back
        }
        while(p>0 && a[p]>=a[p-1])
        {
            p--;
            // after the point it reached th emax start dec
        }
        cout<<p<<"\n";
    }
}
