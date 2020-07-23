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
        string s;
        cin>>s;
        map<char,int> m;
        for(char x:s)
        {
            m[x]++;
        }
        int f=1;
        for(auto x:m)
        {
            if(x.second&1)
            {
                f=0;
                cout<<"NO"<<"\n";
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<"\n";
        }
    }
}
