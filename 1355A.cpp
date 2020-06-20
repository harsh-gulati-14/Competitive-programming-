#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
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
        ll n,k;
        cin>>n>>k;
        for(i=0;i<k-1;i++)	
        {
            ll mi=INT_MAX;
            ll ma=INT_MIN;
            ll m=n,d,r;
            while(m>0)
            {
                d=m%10;
                ma=max(d,ma);
                mi=min(d,mi);
                m=m/10;
            }
            n=n+(mi*ma);
            if(mi==0)
            {
                break;
            }
        }
        cout<<n<<"\n";
    }
}