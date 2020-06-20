#include<iostream>
#include<stack>
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
    freopen("out.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    while(k--)
    {
     	ll n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        stack<int> s;
        vec v;
        s.push(0);
        v.pb(1);
        int x;
        for(i=1;i<n;i++)
        {
            if(s.empty())
            {
                s.push(i);
                v.pb(1);
            }
            else{
                while(a[i]>a[s.top()] && s.size()>0)
                {
                    s.pop();
                    x=s.top();
                }
            }
            if(s.size()==0)
            {
                v.pb(i+1);
            }
            else{
            v.pb(i-s.top());
            }
            s.push(i);
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
    }
}
