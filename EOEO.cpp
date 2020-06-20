#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
ll divi(ll n)
{
    ll c=1;
    while(!(n&1))
    {
        n=n>>1;
        c++;
    }
    return c;
}
ll ispower(ll n)
{
     return n && (!(n&(n-1)));
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    while(k--)
    {
     	ll n;
        cin>>n;
        if(n&1)
        {
            cout<<n/2<<"\n";
        }
        else{
            ll c=1,x=0;
            j=n;
            c=divi(n);
            l=pow(2,c);
            cout<<j/l<<"\n";
        }
    }
}
