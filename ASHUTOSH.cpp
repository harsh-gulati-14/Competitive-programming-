#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define mp make_pair
#define pb push_back 
#define ma map<int,int> 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    vec v1,v2,vn;
    string s;
    cin>>s;
    vector<char> vs;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            v1.pb(i);
            vn.pb(s[i]-'0');
        }
    }
   // sort(vs.begin(),vs.end());
    for(i=0;i<3;i++)
    {
        cout<<vn[i];
    }
}
