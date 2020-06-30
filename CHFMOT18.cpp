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
        ll x,n,c=0;
        cin>>x>>n;
        c=x/n;
        if(x==1)
        {
            cout<<1<<"\n";
            continue;
        }
        else{
            if(x&1)
            {
                x=x-1;
                c++;
            }
            if(x%n!=0)
            {
                x=x%n;
                c++;
            }
        }
        cout<<c<<"\n";
    }
}
