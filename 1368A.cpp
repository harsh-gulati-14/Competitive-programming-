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
        ll a,b,n;
        cin>>a>>b>>n;
        ll s=0,c=0;
        while(s<=n)
        {
            c++;
            s=a+b;
            j=min(a,b);
            if(a==j)
            {
                a=s;
            }
            else{
                b=s;
            }
        }
        cout<<c<<"\n";
    }
}
