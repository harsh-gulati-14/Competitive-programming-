#include<iostream>
#include<map>
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
    freopen("output1.txt","w",stdout);
    #endif
    ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        string s;
        ll p=7;
        while(p--)
        for(i=97;i<=122;i++)
        {
            s.push_back((char)i);
        }
        for(i=97;i<115;i++)
        {
            s.push_back((char)i);
        }
        ll n;
        cin>>n;
        ll a[n];
        ll f=0;
        string s1=s;
        reverse(s1.begin(),s1.end());
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(f)
            {
                if(a[i]==0)
                {
                    f=0;
                    cout<<s1<<"\n";
                }
                else{
                    cout<<s1.substr(0,a[i])<<"\n";  
                    f=1;     
                }
            }
            else{
                if(a[i]==0)
                {
                    cout<<s<<"\n";
                    f=1;
                }
                else{
                    cout<<s.substr(0,a[i])<<"\n";       
                    f=0;
                }
            }
        }
        if(a[n-2]==0)
        {
            if(f==0)
            {
                cout<<s<<"\n";
                f=1;
            }   
            else
            {
                cout<<s1<<"\n";
                f=0;
            }
        }
        else{
            if(!f)
            cout<<s.substr(0,a[n-2])<<"\n"; 
            else
                cout<<s1.substr(0,a[n-2])<<"\n"; 
        }
        if(a[n-1]==0)
        {
            if(!f && a[n-2]==0)
            {
                cout<<s<<"\n";
            }
            if(!f && a[n-2]!=0)   
            {
                cout<<s1<<"\n";   
            }
            if(f)
            {
                cout<<s1<<"\n";
            }
        }
        else{
            if(f==0 && a[n-2]!=0)
            cout<<s.substr(0,a[n-1])<<"\n";
            else if(f==1 && a[n-2]!=0) 
               {
                cout<<s1.substr(0,a[n-1])<<"\n";
               } 
             else if(a[n-2]==0 && f==1){
            cout<<s.substr(0,a[n-1])<<"\n"; }
        else{
            cout<<s1.substr(0,a[n-1])<<"\n"; 
        }
        }
        // for(i=0;i<n-1;i+=2)    
        // {
        //     if(a[i] && a[i+1]==0)
        //     {
        //         cout<<s.substr(0,a[i])<<"\n";
        //         cout<<s<<"\n";
        //     }
        //     else if(a[i]==0 && a[i+1]==0)
        //     {
        //         cout<<s1<<"\n";
        //         cout<<s<<"\n";
        //     }
        //     else if (a[i]==0 && a[i+1])
        //     {
        //         cout<<s1<<"\n";
        //         cout<<s.substr(0,a[i])<<"\n";
        //     }
        //     else 
        //     {
        //         cout<<s.substr(0,a[i])<<"\n";
        //     }
        // 
    }
}
