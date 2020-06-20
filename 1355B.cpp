#include<climits>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
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
    cin>>l;
    while(l--)
    {
     	ll n;
        cin>>n;
        vec v;
        for(i=0;i<n;i++)
        {
            cin>>k;
            v.pb(k);
        }
        sort(v.begin(),v.end());
        /*for(auto x:v)
        {
            //cout<<x<<" ";
        }
        int c=0,ans=INT_MIN;
        int m=n,f;
        for(j=0;j<n;j++)
        {
            f=c;
            c=0;
            m=n-j;
            for(i=j;i<n;i++)
            {
                ans=c; 
                k=v[i];
                if(k>m)
                {
                    break;
                }   // here our approach is corrrect but got wrong because of TLE error
                else{
                    i=i+k-1;
                    c++;
                } 
                m=n-k;
            }
            c=max(c,ans);
            c=max(c,f);
        }
        cout<<c<<"\n";*/
        int c=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(++c==v[i])
            {
                c=0;
                ans++;
            }
        }
        cout<<ans<<"\n";
        }

}