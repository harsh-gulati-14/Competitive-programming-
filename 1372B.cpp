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
        ll n;
        cin>>n;
        if(n&1)
        {
            ll f=1;
            for(i=2;i<=n/2;i++)
            {
                if((n-i)%i==0
)                {
                    f=0;
                    cout<<i<<" "<<n-i<<"\n";
                    break;
                }
            }
            if(f)
            {
                cout<<1<<" "<<n-1<<"\n";
            }
        }
        else{
            cout<<n/2<<" "<<n/2<<"\n";
        }
    }
}
