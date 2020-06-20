#include<iostream>
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
        int n;
        cin>>n>>j;
        vec v;
        for(i=0;i<n;i++)
        {
            cin>>l;
            v.pb(l);
        }
        int s=0;
        for(auto x:v)
        {
            if(x>j)
            {
                s=s+(x-j);
            }
        }
        cout<<s<<"\n";
    }
}
