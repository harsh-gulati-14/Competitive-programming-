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
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m;
    cin>>m;
    while(m--)
    {
        cin>>k;
        char a[8][8];
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(k>0)
                {
                    a[0][0]='O';
                    a[i][j]='.';
                    k--;
                }
                else{
                    a[0][0]='O';
                    a[i][j]='X';   
                }
            }
        }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
}
