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
        string s;
        cin>>s;
        int n=s.length();
        if(s.length()>3)
        {
            for(i=0;i<n-1;i+=2)
            {
                cout<<s[i];
            }
            cout<<s[n-1]<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
}
