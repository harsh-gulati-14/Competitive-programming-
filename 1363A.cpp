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
    cin>>l;
    while(l--)
    {
     	 int n, x;
    cin >> n >> x;
    int counto = 0,counte=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 != 0)
            counto++;
        else counte++;
    }
 
    if (counto == 0)
    {
        cout << "No\n";
        
    }
 
    if (x > counto)
    {
        if (counto % 2 != 0)
        {
            cout << "Yes\n";
            
        }
        else
        {
            if (n - 1 >= x)
            {
                cout << "Yes\n";
                
            }
            else
            {
                cout << "No\n";
                
            }
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            if (counte >= 1)
            {
                cout << "Yes\n";
                
            }
            else
            {
                cout << "No\n";
                
            }
        }
        else
        {
            cout << "Yes\n";
            
        }
    }
 
}
}
