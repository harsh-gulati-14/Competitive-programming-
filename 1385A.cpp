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
        ll a[3];
        ll n=3;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+n,greater<int> ());
        if(a[0]==a[1] && a[1]==a[2])
        {
            cout<<"YES"<<"\n";
            for(i=0;i<3;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }
        else if(a[0]==a[1])
        {
            cout<<"YES"<<"\n";
            cout<<a[0]<<" "<<a[2]<<" ";
            if(a[2]-1==0)
            {
                cout<<1<<"\n";
            }
            else{
                cout<<a[2]-1<<"\n";
            }
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
