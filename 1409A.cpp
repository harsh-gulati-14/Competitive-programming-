#include<iostream>
#include<map>
#include <bits/stdc++.h>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        double x,y,dif;
        cin>>x>>y;
        if(x>y)
        {
            dif=x-y;
        }
        else{
            dif=y-x;
        }
        dif=dif/10;
        dif=ceil(dif);
        cout<<(ll)dif<<"\n";
    }
}
