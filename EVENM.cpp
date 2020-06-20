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
    ll i,j,k,l;
    cin>>l;
    while(l--)
    {
        ll n;
        cin>>n;
        ll a[n][n],l=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=l;
                l++;
            }
        }
        for(i=0;i<n;i=i+2)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
            if(i+1<n)
            for(k=n-1;k>=0;k--)
            {
                cout<<a[i+1][k]<<" ";
            }
            cout<<"\n";
        }
    }
}
