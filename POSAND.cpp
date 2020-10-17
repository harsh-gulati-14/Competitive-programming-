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
        ll n;
        cin>>n;
        stack<ll> s;
        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
        if((ceil(log2(n)) == floor(log2(n))))
        {   
            cout<<-1<<"\n";
            continue;
        }
        if(n==3)
        {
            cout<<"1 3 2"<<"\n";
        }
        else if(n==5)
        {
            cout<<"2 3 1 5 4 "<<"\n";
        }
        else if(n==6)
        {
            cout<<"1 5 3 2 6 4"<<"\n";
        }
        else if(n==7)
        {
            cout<<"1 5 7 3 2 6 4"<<"\n";
        }
        if(n>8)
        {
              for(i=n;i>=8;i--)
                {
                    if((ceil(log2(i)) == floor(log2(i))))
                    {
                        s.pop();
                        s.push(i);
                        s.push(i+1);
                    }
                    else{
                        s.push(i);
                    }
                }
                s.push(7);
                s.push(5);
                s.push(1);
                s.push(3);
                s.push(2);
                s.push(6);
                s.push(4);
                while(!s.empty())
                {
                    cout<<s.top()<<" ";
                    s.pop();
                }
                cout<<'\n';
        }
    }
}
