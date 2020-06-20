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
        ll n;
        cin>>n;
        ll a[n],m[20]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==5)
            {
                m[5]++;
                continue;
            }
            if(a[i]==10)
            {
                if(m[5]>=1)
                {
                    m[5]--;
                    m[10]++;
                }
                else{
                    f=1;
                    cout<<"No"<<"\n";            
                    break;
                }
            }
            if(a[i]==15)
            {
                if(m[10]>=1)
                {
                    m[10]--;
                    m[15]++;
                    continue;
                }
                else if(m[5]>=2)
                {
                    m[5]--;
                    m[5]--;
                    m[15]++;
                    continue;
                }
                else{
                    f=1;
                    cout<<"No"<<"\n";            
                    break;   
                }
            }
        }
            if(f==0)
            {
                cout<<"Yes"<<"\n";
            }
    }
}
