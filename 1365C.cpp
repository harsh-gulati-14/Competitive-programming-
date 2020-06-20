#include<iostream>
#include<map>
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
    ll n;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    k=0;
    for(i=5;i<2*n;i++)
    {
        b[i]=a[k];
        k++;
    }
    ma m1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==b[i])
            {
                m1[(j-i)%(n-1)]++;
                cout<<abs(j-i);
            
            }
        }
    }
    for(auto x:m1)
    {
    //    cout<<x.first<<" "<<x.second;
    }
}
