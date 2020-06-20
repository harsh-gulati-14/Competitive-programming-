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
        ll n;
        cin>>n;
        vec va,vb;
        ll s=0;
        va.pb(0);
        vb.pb(0);
        for(i=0;i<n;i++)
        {
            cin>>l;
            s=s+l;
            va.pb(s);
        }
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>l;
            s=s+l;
            vb.pb(s);
        }
        s=0;
        for(i=0;i<va.size()-1;i++)
        {
            if(va[i+1]==vb[i+1] && va[i]==vb[i])
            {
                s+=va[i+1]-va[i];
            }
        }
        cout<<s<<"\n";
    }
}

