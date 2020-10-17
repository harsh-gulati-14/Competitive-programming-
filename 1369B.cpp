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
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n;
        cin>>s;
        ll a[n];
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                j=i+2;
                while(j<n && s[j]=='0')
                {
                    s[j]=' ';
                    j++;
                }
                j=i;
                while(j>=0 && s[j]=='1')
                {
                    s[j]=' ';
                    j--;
                }
            }
        }
        cout<<s;
    }
}
