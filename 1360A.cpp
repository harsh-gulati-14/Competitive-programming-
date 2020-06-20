#include<iostream>
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
    cin>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        if(min(2*a,2*b)>=max(a,b))
        {
            cout<<pow(min(2*a,2*b),2)<<"\n";
        }
        else{
            cout<<pow(max(a,b),2)<<"\n";
        }
    }
}