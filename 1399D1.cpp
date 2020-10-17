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
        stack<pair<char,int> > st;
        ll res[n+1]={0};
        ll last=1,pos=1,pre=1;
        for(i=0;i<n;i++)
        {
            if(st.empty())
            {
            	cout<<last<<"\n";
                st.push(make_pair(s[i],last++));
                pos++;
            }
            else if(st.top().first==s[i])
            {
                st.push(make_pair(s[i],last++));
                pos++;
            }
            else{
            	cout<<last<<" "<<pos<<" "<<st.top().second<<"\n";
                res[st.top().second]=st.top().second;
                res[pos]=st.top().second;
                st.pop();
                if(st.empty())
                {
                	last--;
                }
                pos++;
            }
        }
        cout<<'\n';
        while(!st.empty())
        {
            // cout<<st.top().first<<" "<<st.top().second<<"\n";
            res[st.top().second]=st.top().second;
            st.pop();
        }
        for(i=1;i<=n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
}
