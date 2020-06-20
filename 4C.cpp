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
    vector<string> v;
    string s;
    ll n;
    cin>>n;
    k=0;
    map<string,int> m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        m[s]++;
        if(m[s]==1)
        {
            cout<<"OK"<<"\n";
        }
        else{
            cout<<s<<(m[s]-1)<<"\n";
        }
    }
}
