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
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0,o=0,e=0;
        for(i=0;i<n;i++)
        {
            if(i&1)
            {
                if(a[i]&1)
                {
                    continue;
                }
                else{
                    o++;
                }
            }
            else{
                if(!(a[i]&1))
                {
                    continue;
                }
                else{
                    e++;
                }
            }
        }
        if(o==e)
        {
            cout<<o<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
