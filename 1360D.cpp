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
            ll c=0;
          ll n,k;
          cin>>n>>k;
        ll ans=n;
          for ( j = 1; j * j <= n; j++) {
                if (n % j == 0) {
                    if (j <= k) {
                        ans = min(ans, n / j);
                    }
     
                    if (n / j <= k) {
                        ans = min(ans, j);
                    }
                }
            }
            cout<<ans<<"\n";
        }
    }