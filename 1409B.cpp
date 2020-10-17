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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll m1=1e18,m2=1e18,m3=1e18;
        if(a-n>=x)
        {
            m1=(a-n)*b;
        }
        if(b-n>=y)
        {
            m1=min((b-n)*a,m1);
        }
        ll a1=a,b1=b,n1=n;
        // cout<<m1<<"\n";
                b=b-n;
                if(b<y)       
                {
                   n=y-b;
                    b=y;
                }
                else{
                    n=0;
                }
                a=a-n;
                if(a<x)
                {
                    a=x;
                }
                m2=a*b;
                if(n){
                    a1=a1-n;
                    if(a1<x)
                    {
                        a1=x;
                    }
                    else{
                        n=0;
                    }
                    b1=b1-n;
                    if(b1<y)       
                    {
                        n=y-b1;
                        b1=y;
                    }
                    m3=a1*b1;
                }
            // cout<<m3<<" "<<m2;
            m2=min(m2,m3);
        cout<<min(m1,m2)<<"\n";
    }
}
