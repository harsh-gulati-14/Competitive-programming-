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
    string s1,s2;
    cin>>s1>>s2;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    
}
