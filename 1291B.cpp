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
        ll n;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll k=0;
        ll pe=-1,se=n;
        // for(i=0;i<n;i++)
        for(i=0;i<n;i++)
        {
            if(a[i]<i)
            {
                break;
            }
            pe=i;
        }
        n--;
        for(i=n;i>=0;i--)
        {
            if(a[i]<n-i)
            {
                break;
            }
            se=i;
        }
        if(se<=pe)
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
