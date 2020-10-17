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
        ll i,j,k,l,m,t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            ll a[n];
            ll sum=0;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
            ll prefix[n]={0},s=0;
            ll maxso=0,pre=0;
            ll f=1;
            for(i=0;i<n;i++)
            {
                s+=a[i];
                if(s<=0)
                {
                    f=0;
                    break;
                }
            }
            s=0;
            if(f)
            for(i=n-1;i>=0;i--)
            {
                s+=a[i];
                if(s<=0)
                {
                    f=0;
                    break;
                }
            }
            if(!f)
            {
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
            }
        }
    }
