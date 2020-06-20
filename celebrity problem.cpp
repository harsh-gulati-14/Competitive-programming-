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
        int n=3;
        int p[n][n] = {{0, 1, 0}, 
                    {0, 0, 0}, 
                    {0, 1, 0}}; 

        stack<int> s;
        for(i=0;i<n;i++)
        {
            s.push(i);
        }
        while(s.size()>=2)
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(p[a][b])
            {
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int pot=s.top();
        int f;
        for(i=0;i<n;i++)
        {
            if(i!=pot)
            {
                if(p[pot][i]==0 && p[i][pot]==1)
                {
                    f=1;
                }
                else{
                    f=0;
                    break;
                }
            }
        }
        if(f==1)
        {
            cout<<pot<<" ";
        }   
        else{
            cout<<"NO"<<" ";
        }
    }
}

