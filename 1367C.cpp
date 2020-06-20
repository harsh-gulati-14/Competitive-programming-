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
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n>>l;
        string s1;
        cin>>s1;
        int a[n],pre[n]={0},suf[n]={0};
        int p=-1,s=-1;
        for(i=0;i<n;i++)
        {
            pre[i]=-1;
            suf[i]=-1;
        }
        for(i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                p=i;
            }
            pre[i]=p;
        }
        if(s1[n-1]!='1')
        {
            suf[n-1]=-1;
        }
        else{
            suf[n-1]=n-1;
        }
        for(i=n-2;i>=0;i--)
        {
            if(s1[i]=='1')
            {
                s=i;
            }
            suf[i]=s;
        }
        for(i=0;i<n;i++)
        {
            // /cout<<suf[i]<<" ";
        }
        int c=0;
        for(i=0;i<n;i++)
        {
            int v2=10000;
            int v1=10000;
            if(pre[i]!=-1 )
            {
                v2=i-pre[i];
            }
            if(suf[i]!=-1)
                v1=suf[i]-i;
            if(  min(v1,v2)>l)    
            {
                c++;
                pre[i]=i;
            }
            if(pre[i]>pre[i+1])
                {
                    pre[i+1]=pre[i];
                }
        }
        cout<<c<<"\n";
    }
}
