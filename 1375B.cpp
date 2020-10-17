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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int f=1;
        for(i=0;i<n;i++)
        {
            if(f)
            {
                for(j=0;j<m;j++)
                {
                    if(f)
                    {
                        if((i==0 && j==0)||(i==n-1 && j==0)||(i==0 && j==m-1)||(i==n-1 && j==m-1))
                        {
                            if(a[i][j]>2)
                            {
                                f=0;
                                break;
                            }
                        }
                        else if(i==0 || j==0 || i==n-1 || j==m-1)
                        {
                            if(a[i][j]>3)
                            {
                                f=0;
                                break;
                            }
                        }
                        else{
                            if(a[i][j]>4)
                            {
                                f=0;
                                break;
                            }
                        }
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<"\n";
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i==0 && j==0)||(i==n-1 && j==0)||(i==0 && j==m-1)||(i==n-1 && j==m-1))
                        {
                            a[i][j]=2;
                        }
                        else if(i==0 || j==0 || i==n-1 || j==m-1)
                        {
                            a[i][j]=3;
                        }
                        else{
                            a[i][j]=4;
                        }
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}
