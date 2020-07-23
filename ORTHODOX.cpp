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
        ma m1;
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll p,f=1;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                p=p|a[i];
            }
            if(m1[p]!=0)
            {
                f=0;
                cout<<"NO"<<"\n";
                break;
            }
            m1[p]++;
        }
        if(f)
        {
            cout<<"YES"<<"\n";
        }
    }
}
