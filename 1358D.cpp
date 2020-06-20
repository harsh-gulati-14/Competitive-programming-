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
    ll n,x,m=0;
    cin>>n>>x;
    ll num[n],pos,s=0;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
        s=s+num[i];
    }
    ll a[s];
    l=0;
    m=0;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=num[i];j++)
        {
            a[l]=j;
            l++;
        }
    }
    for(i=0;i<l;i++)
    {
       if(m<a[i])
       {
        m=a[i];
        pos=i;
       }
    }
    ll left=0,right=0,sl=0,sr=0;
    left=pos-x+1;
    right=pos+x-1;
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<" ";
    }cout<<"\n";
    if(left>=0)
    {
        for(i=left;i<=pos;i++)
        {
            sl=sl+a[i];
        }
    }
    if(right<l)
    {
        for(i=pos;i<=right;i++)
        {
            sr=sr+a[i];
        }
    }
    if(left<0)
    {
        for(i=0;i<=pos;i++)
        {
            sl=sl+a[i];
        }
        for(i=l-1;i>=l+left;i--)
        {
            sl=sl+a[i];
        }
    }
    if(right>=l)
    {
        for(i=pos;i<l;i++)
        {
            sr=sr+a[i];
        }
        for(i=0;i<right-l;i++)   
        {
            sr=sr+a[i];   
        }
    }
    cout<<sr<<sl<<"\n";
    cout<<max(sr,sl);
}
