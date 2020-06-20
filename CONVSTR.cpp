#include<unordered_map>
#include<map>
#include<iostream>
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
        ll n;cin>>n;
        string a,b;
        cin>>a>>b;
        unordered_map<char,int> mpa;
        unordered_map<char,int> mpb;
        bool chk=true;
        for(i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                chk=false;
            }
            mpa[a[i]]++;
            mpb[b[i]]++;
        }
        if(mpa.size()<mpb.size())
            chk=false;
        for(auto i:mpb)
        {
            if(mpb[i.first]==0)
            {
                chk=false;
                break;
            }

        }
        if(chk)
        {
            map<char,vector<int>,greater<int>> final;
            for(i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    final[b[i]].pb(i);
                }
            }
            cout<<final.size()<<"\n";
            for(auto i:final)
            {
                cout<<1+i.second.size()<<" ";
                ll chkpos=a.find_first_of(i.first);
                char ch=a[chkpos];
                for(auto j:i.second)
                {
                    cout<<j<<" ";
                    a[j]=ch;
                }
            }
            cout<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
