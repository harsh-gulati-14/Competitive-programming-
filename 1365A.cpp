#include<iostream>
#include<map>
#include<set>
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
        ll a[n][m];
        set<int> si,sj;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    si.insert(i);
                    sj.insert(j);
                }
            }
        }
        ll pi=abs(n-si.size());
        ll pj=abs(m-sj.size());
        ll p=min(pi,pj);
        if(p&1)
        {
            cout<<"Ashish"<<"\n";
        }
        else{
            cout<<"Vivek"<<"\n";
        }
    }
}
