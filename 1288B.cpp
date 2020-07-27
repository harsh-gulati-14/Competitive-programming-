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
        ll n,k;
        cin>>n>>k;
        ll d,r=0,b=n,p=0;
        while(k>0)
        {
            d=k%10;
            if(d==9)
            {
                r++;
            }
            p++;
            k=k/10;
        }
        if(p==r)
        {
            cout<<b*p<<"\n";
        }
        else{
            cout<<b*(p-1)<<"\n";
        }
    }
}
