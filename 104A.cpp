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
    ll n;
    cin>>n;
    if(n>=11&&n<20 || n==21)
    {
        cout<<4;
    }
    else if(n==20)
    {
        cout<<15;
    }
    else{
        cout<<0;
    }
}
