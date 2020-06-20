#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,vector<int>> 
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
        vec v;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int h1=0,h0=0;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==1)
            {
                h1=1;
            }
            else{
                h0=1;
            }
        }
        int al=1;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                al=0;
            }
        }
        if(al)
        {
            cout<<"Yes"<<"\n";
            continue;
        }
        if(h1 && h0)
        {
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }

}
