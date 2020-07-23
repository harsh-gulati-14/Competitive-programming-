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
        ma m1,m2;
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(m1[a[i]]==0)
            m1[a[i]]++;
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            if(m2[b[i]]==0)
            m2[b[i]]++;
        }
        int f=0;
        for(auto x:m1)
        {
            m2[x.first]++;
        }
        for(auto x:m2)
        {
            if(x.second>1)
            {
                f=1;
                cout<<"YES"<<"\n";
                cout<<1<<" "<<x.first<<"\n";
                break;
            }
        }
        if(!f)
        {
            cout<<"NO"<<"\n";
        }
    }
}
