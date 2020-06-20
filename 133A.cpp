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
    ll i,j,k,l,f=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cout<<"YES";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"NO";
    }
}
