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
        vec v;
        int n;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>l;
            v.pb(l);
        }
        ll s=0;
        for(i=0;i<n-1;i++)
        {
            s+=abs(v[i]-v[i+1])-1;
        }
        cout<<s<<"\n";
    }
}
