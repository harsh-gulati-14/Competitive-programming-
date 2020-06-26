#include<iostream>
#include<map>
#include<algorithm>
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
        ll a[n] ;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cm=0;
        sort(a,a+n);
        int j=1;
        for(i=0;i<n;i++)
        {
            if(a[i]>j)
            {
                cm=j;
                break;
            }
            else{
                j++;
            }
        }
        if(i==n && cm==0)
        {
            cm=a[n-1]+1;
        }
        if(cm<m)
        {
            cout<<-1<<"\n";
        }
        else if(cm==n)
        {
            cout<<n<<"\n";
        }
        else{
            int r=0;
            for(i=0;i<n;i++)
            {
                if(a[i]!=m)
                {
                    r++;
                }
            }
            cout<<r<<"\n";
        }
    }
}
