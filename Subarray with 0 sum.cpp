#include<iostream>
#include<unordered_map>
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
        unordered_map<ll,ll> m;
        int n;
     	cin>>n;
        vec v,v1;
        for(i=0;i<n;i++)
        {
            cin>>l;
            v.pb(l);
        }
        int sum=0,f=0;
        for(i=0;i<n;i++)
        {
            sum=sum+v[i];
            if(sum==0)
            {
                f++;
            }
            if(m.count(sum)!=0)
            {
                f=f+m[sum];
            }
            m[sum]++;
        }
        cout<<f<<"\n";

    }
}