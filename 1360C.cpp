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
    cin>>l;
    while(l--)
    {
     	ll e=0,o=0,n;
        vec v;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>k;v.pb(k);
            if(k&1) o++;
            else e++;
        }
        sort(v.begin(),v.end());
        ll c=0;
        if(o%2==0 || e%2==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            c=0;
            for(i=0;i<n-1;i++)
            {
                if(v[i+1]-v[i]==1)
                {
                    c++;
                    i++;
                }
            }
            if(c>=1)
            {
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
}