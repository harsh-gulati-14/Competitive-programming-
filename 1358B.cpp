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
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll c=0,f=1,s=0;
        l=0;
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            s=max(s,a[i]);
            c++;
            if(s<=c)
            {
                f=f+(c-l);
                s=0;
                l=c;
            }
        }
        cout<<f<<"\n";
    }
}
