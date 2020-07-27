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
    freopen("output1.txt","w",stdout);
    #endif
    ll i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        ll s=0;
        if(n==1 && m==1)
        {
                s=x;
            cout<<s<<"\n";
        }
        else if(n==1 || m==1)
        {
            double p=max(n,m);
            int f=p/2;
            p=ceil(p/2);
            if(x<=y)
            {
                ll a=y-x;
                if(a>x)
                {
                    a=x;
                }                
                s+=p*x+(max(n,m)-p)*(a);
            }
            else if(x>y)
            {
                if(y==1)
                {
                    s=p;
                }
                else
                     s+=p*(y-1)+f;
            }
            cout<<s<<"\n";

        }
        else if((n*m)%2==0)
        {
            ll p=(n*m)/2;
            if(x<=y)
            {
                ll a=y-x;
                if(a>x)
                {
                    a=x;
                }
                s+=p*x+p*(a);
            }
            else if(x>y)
            {
                s+=p*(y-1)+p;
            }
            cout<<s<<"\n";
        }
        else{
            float r=n,u=m;
            double p=((r*u)/2);
            p=ceil(p);
            double o=floor((r*u)/2);
            if(x<=y)
            {
                ll a=y-x;
                if(a>x)
                {
                    a=x;
                }
                s+=p*x+o*(a);
            }
            else if(x>y)
            {
                if(y==1)
                {
                    s=p;
                }
                else
                s+=p*(y);
            }   
            cout<<s<<"\n";
        }
    }
}
