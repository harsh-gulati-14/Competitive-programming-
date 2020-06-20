	#include<iostream>
#include<vector>
#include<algorithm>
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
    ll i,j,k,l;
    cin>>k;
    while(k--)
    {
     	ll n,m;
        cin>>n>>m;
        if((n*m)&1)
        {
            cout<<((n*m)+1)/2<<"\n";
        }
        else{
            cout<<(n*m)/2<<"\n";
        }
    }
}
