#include<iostream>
#include<map>
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
        ll n,b,m;
        cin>>n>>b>>m;
        ll p=-1;
        ll c=0;
        while(m--)
        {
            cin>>j;
            if((j/b)!=p)
            {
                p=(j/b);
                c++;
            }
        }
        cout<<c<<"\n";
    }
}