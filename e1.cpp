#include<stack>
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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        i=0;
        while(i<n)
        {
            if(st.empty() || st.top()!=s[i])
            {
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
        }
        if(st.size()==0)
        {
        	cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
    }
}
