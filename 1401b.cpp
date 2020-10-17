#include<iostream>
#include<map>
#include <bits/stdc++.h>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll a[3],b[3];
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<3;i++)
        {
            cin>>b[i];
        }
        ll sum=0;
        if(a[2]<b[1])
        {
            sum+=2*a[2];
            a[2]=0;
            b[1]-=a[2];
        }
        else{
            sum+=2*b[1];
            a[2]-=b[1];
            b[1]=0;
            if(a[2] && b[2])
            {
                if(b[2]>a[2])
                {
                    b[2]-=a[2];
                    a[2]=0;
                }
                else{
                    a[2]-=b[2];
                    b[2]=0;
                }
            }
            if(a[2] && b[0])
            {
                if(a[2]>b[0])
                {
                    a[2]-=b[0];
                    b[0]=0;
                }
                else
                {
                    b[0]-=a[2];
                    a[2]=0;
                }
            }
        }
        // a[2]=0 && b[1]=0 | b[0]=0 | b[2]=0
        if(b[2]&& a[0])
        {
            if(b[2]>a[0])
            {
                b[2]-=a[0];
                a[0]=0;
            }
            else{
                a[0]-=b[2];
                b[2]=0;
            }
        }
        if(b[2] && a[1])
        {
            if(b[2]>a[1])
            {
                sum-=2*a[1];
                b[2]-=a[1];
                a[1]=0;
            }
            else{
                 sum-=2*b[2];
                a[1]-=b[2];
                b[2]=0;   
            }
        }
        cout<<sum<<"\n";
    }
}
