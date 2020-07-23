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
    ll i,j,k,l=0;
    // cin>>m;
    // while(m--)
    {
        ll a=0,b=0,c=0;
        ma m;
        ll n;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>l;
            a+=l;
        }l=0;
        for(i=0;i<n-1;i++)
        {
            cin>>l;
            b+=l;
        }l=0;
        for(i=0;i<n-2;i++)
        {
            cin>>l;
            c+=l;
        }
        cout<<a-b<<"\n"<<b-c;
    }
}
