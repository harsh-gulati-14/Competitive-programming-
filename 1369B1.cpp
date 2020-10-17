    #include<iostream>
    #include<map>
    #include <bits/stdc++.h>
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
        ll i,j,k,l,m,t;
        cin>>t;
        while(t--)
        {
            ll n;
            string s;
            cin>>n;
            cin>>s;
            ll a[n];
            ll z=-1,o=-1;
           for(i=0;i<n;i++)
           {
                if(s[i]=='1')
                {
                    o=i;
                    break;
                }
           }
           if(o==-1)
           {
                cout<<s<<"\n";
                continue;
           }
           for(i=n-1;i>=0;i--)
           {
                if(s[i]=='0')
                {
                    z=i;
                    break;
                }
           }
           if(z+1==o || z==-1)
           {
                cout<<s<<"\n";
                continue;
           }
           else{
            
            for(i=0;i<o;i++)
            {
                cout<<s[i];
            }
               for(i=z;i<n;i++)
               {
                cout<<s[i];
               }
               cout<<"\n";
           }
        }
    }
