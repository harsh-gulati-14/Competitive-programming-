
#include<iostream>
#include<string>
#include<stack>
using namespace std;
typedef long long int ll;
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
    	stack<char> st;
    	string s;
    	cin>>s;
    	for(i=0;i<n;i++)
    	{
    		if(st.empty())
    		{
    			st.push(s[i]);
			}
			else{
	    		if(st.top()=='(' && s[i]==')')
	    		{
	    			st.pop();
	    		}
	    		else{
	    			st.push(s[i]);
	    		}
	    	}
    	}
//    	cout<<st.size();
    	if(!st.empty())
    	cout<<st.size()/2<<"\n";
    	else{
    		cout<<0<<"\n";
		}
    }
}