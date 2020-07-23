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
        ll a[n];
        ll c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c++;
        }
        if(c==n)
        {
            if(c&1)
            {
                cout<<"First"<<"\n";
            }
            else{
                cout<<"Second"<<"\n";
            }
        }
        else{
            ll x=0;
            for(i=0;i<n;i++)
            {
                if(a[i]!=1)
                {
                    x=i;
                    break;
                }   
            }
            if(!(x&1))  
            {
            cout<<"First"<<"\n";
            }
            else{
                cout<<"Second"<<"\n";
            }
        }
    }
}
