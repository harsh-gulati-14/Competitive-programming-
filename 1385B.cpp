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
    cin>>k;
    while(k--)
    {
        ll n;
        ma m;
        cin>>n; ll a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<2*n;i++)
        {
            if(m[a[i]]==0)
            {
                cout<<a[i]<<" ";
                m[a[i]]++;
            }
        }
        cout<<"\n";
    }
}
