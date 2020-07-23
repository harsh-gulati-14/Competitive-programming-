#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
  
bool isPower(ll x, ll y) 
{ 
    // The only power of 1 is 1 itself 
    if (x == 1) 
        return (y == 1); 
  
    // Repeatedly comput power of x 
    long int pow = 1; 
    while (pow < y) 
        pow *= x; 
  
    // Check if power of x becomes y 
    return (pow == y); 
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m;
    cin>>m;
    while(m--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll p=a[0],c=1;
        if(x>=a[0])
        {
            cout<<n<<"\n";
        }
        else
        {
            if(isPower(x,p))
            {
                while(x!=p)
                {
                    x*=2;
                    c++;
                }
                cout<<c+n-1<<"\n";
            }
            else
            {
                while(x<=p)
                {
                    x*=2;
                    c++;
                }
                cout<<c+n<<"\n";
            }
        }
    }
}
