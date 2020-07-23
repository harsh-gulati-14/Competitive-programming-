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
    freopen("output1.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
         ll n,s,k;
        cin>>n>>s>>k;
        ll a[k],f=0;
        ma m;
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        vec v(n,0);
        for(i=1;i<=n;i++)
        {
            if(m[i])
            {
                v[i-1]=1;
            }
        }
        for(auto x:v)
        {
            cout<<x;
        }
    }
}
