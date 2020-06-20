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
    string s="codeforces";
    int v[10];
    for(i=0;i<10;i++)
    {
        v[i]=1;
    }
    ll prod=1;
    while(prod<k)
    {
        for(i=0;i<10;i++)
        {
            v[i]++;
            prod/=(v[i]-1);
            prod*=v[i];
            if(prod>=k)
            {
                break;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        while(v[i]>0)
        {
            cout<<s[i];
            v[i]--;
        }
    }
}

