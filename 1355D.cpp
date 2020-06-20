
#include<iostream>
#include<unordered_map>
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
    ll n,s;
    cin>>n>>s;
    ll v=s/n;
    ll rem=s%n;
    ll v1=v;
    ll v2=v+rem;
    if(v1>1) // READ THE QUESTION properly 
    { // in this we were asked to mke PETYA wins
        cout<<"YES"<<"\n";
        for(i=0;i<n-1;i++)
        {
            cout<<v1<<" ";
        }
        cout<<v2<<"\n";
        cout<<1;
    }
    else{
        cout<<"NO";
    }
}