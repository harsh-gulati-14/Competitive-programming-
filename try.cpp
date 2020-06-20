#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("out1.txt","w",stdout);
    #endif
    int i,j,l;
    string s;
    cin>>s;
    vector<int> v,v1,vn;
    vector<char> vs;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            v.push_back(i);
            vn.push_back((int)s[i]);
        }
        else{
            vs.push_back(s[i]);
            v1.push_back(i);
        }
    }
    sort(vs.begin(),vs.end());
    sort(vn.begin(),vn.end(),greater<int> ());
    for(i=0;i<v1.size();i++)
    {
        s[v1[i]]=vs[i];
    }
    for(i=0;i<v.size();i++)
    {
        s[v[i]]=(char)vn[i];
    }
    cout<<s;
}