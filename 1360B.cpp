#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
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
    ll i,j,k;
    cin>>k;
    ll l,h,mid,f,mil,mal,mir,mar;
    while(k--)
    {
        int n;
        cin>>n; int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        l=0;
        h=n-1;
        mid=(l+h)/2;
        sort(a,a+n);
        f=a[n-1]-a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<f){
                f=a[i]-a[i-1];
            }
        }
        cout<<f<<"\n";
    }
}