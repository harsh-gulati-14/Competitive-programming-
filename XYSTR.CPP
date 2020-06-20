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
        i=0;
     	string s;
        cin>>s;
        ll x=0;
        while(i!=s.length()-1)
        {
            if(s[i]=='x')
            {
                if(s[i-1]=='y' || s[i+1]=='y')
                {
                    x++;
                    i+=2;   
                }
            }
            else if(s[i]=='y')
            {
                if(s[i-1]=='x' || s[i+1]=='y')
                {
                    x++;
                    i+=2;
                }
            }
            else{
                i++;
            }
        }
        cout<<x<<"\n";
    }
}
