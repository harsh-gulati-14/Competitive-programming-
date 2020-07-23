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
    // cin>>m;
    // while(m--)
    {
        vec v;
        ll n;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>l;
            v.pb(l);
        }
        sort(v.begin(),v.end());
        cin>>k; 
        while(k--)
        {
            ll p;
            cin>>p;
            vec::iterator it;
            it=upper_bound(v.begin(),v.end(),p);
            // if(it!=v.end())
            {
                cout<<it-v.begin()<<"\n";
            }
            // else{
            //     cout<<0<<"\n";
            // }
        }
    }
}