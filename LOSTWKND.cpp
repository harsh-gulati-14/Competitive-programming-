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
        int s=0,p;
     	for(i=0;i<5;i++)
        {
            cin>>l;
            s=s+l;
        }
        cin>>p;
        s*=p;
        if(s<=120)
        {
            cout<<"No"<<"\n";
        }
        else{
            cout<<"Yes"<<"\n";   
        }
    }
}
