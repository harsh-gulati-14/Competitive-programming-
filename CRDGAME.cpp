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
ll num(ll x)
{
    ll d=0,r=0;
    while(x>0)
    {
        d=x%10;
        r+=d;
        x=x/10;
    }
    return r;
}
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
        ll ca=0,cb=0;
        while(n--)
        {
            ll a,b;
            cin>>a>>b;
            if(num(a)>num(b))
            {
                ca++;
            }
            else if(num(b)>num(a))
            {
                cb++;
            }
            else{
                ca++;
                cb++;
            }
        }
        if(ca>cb)
        {
            cout<<0<<" "<<ca<<"\n";
        }
        else if(cb>ca)
        {
            cout<<1<<" "<<cb<<"\n";   
        }
        else{
            cout<<2<<" "<<ca<<"\n";
        }
    }
}
