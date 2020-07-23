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
        vec a,b;
        for(i=0;i<n;i++)
        {
            cin>>l;
            a.pb(l);
        }
        b=a;
        sort(b.begin(),b.end());
        if(a!=b)
        {
            i=0;j=0;
        ll maxso=-1,f=0;
        while(i<n-1)
        {
            if(a[i]<a[i+1] && a[i+1]>maxso && f==0)
            {
                maxso=a[i+1];
                i++;
                j++;
            }       
            else if(a[i]>a[i+1])
            {
                f=1;
                maxso=a[i+1];
                i++;
                j++;
            }
            else if(a[i]==a[i+1])
            {
                i++;
                j++;
                maxso=a[i+1];
            }
            else{
                maxso=-1;f=0;
                j=0;
            }
        }
        cout<<n-j-1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
}
