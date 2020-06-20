    #include<stack>
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
        freopen("out.txt","w",stdout);
        #endif
        ll i,j,k,l;
        cin>>k;
        while(k--)
        {
         	string s;
            stack<char> st;
            cin>>s;
            for(i=0;i<s.length();i++)
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                   {
                       st.push(s[i]);
                }
                else{
                    if(s[i]==')' && st.top()=='(')
                    {
                        st.pop();
                    }
                    else if(s[i]==']' && st.top()=='[')
                    {
                        st.pop();
                    }
                    else if(s[i]=='}' && st.top()=='{')
                    {
                        st.pop();
                    }
                }
            }
            if(st.size()==0)
            {
                cout<<"balanced"<<"\n";
            }
            else{
                cout<<"not balanced"<<"\n";   
            }

        }
    }
