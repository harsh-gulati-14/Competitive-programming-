#include<stack>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb push_back 
#define ma map<int,int> 
int isoperad(char a)
{
	if(a=='+' || a=='*'  || a=='/'  || a=='-')
		return 0;
	else{
		return 1;
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ll i,j,k,l;
    cin>>k;
    while(k--)
    {
     	stack<int> st;
     	string s;
     	cin>>s;
     	int ans=0;
     	for(i=0;i<s.length();i++)
     	{
     		if(isoperad(s[i]))
     		{
     			st.push(s[i]-'0');
     		}
     		else{
     			ans=0;
     			int x1=st.top();
     			st.pop();
     			int x2=st.top();
     			st.pop();
     			switch(s[i])
     			{
     				case '+': ans=x2+x1;
     				break;
     				case '-': ans=x2-x1;
     				break; 
     				case '*': ans=x2*x1;
     				break;
     				case '/': ans=x2/x1;
     				break;
     			}
     			st.push(ans);
     		}
     	}
     	cout<<ans<<"\n";
    }
}

