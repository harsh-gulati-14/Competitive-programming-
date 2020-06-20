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
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l;
    vec v;
    ll n=1000009;
    vector<char> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(i=2;i<=n;i++)
    {
        if(prime[i] && (ll)i*i<=n)
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    map <ll, bool > tprime;
    for (int i = 2; i < n; i++){
        if (prime[i]) {
         tprime[1ll * i * i] = true;
        }
    }
    cin>>k;
    while(k--)
    {
        ll p;
        cin>>p;
        if(tprime[p])
        {
            cout<<"YES"<<"\n";
        }    
        else{
            cout<<"NO"<<"\n";
        }
    }
}

