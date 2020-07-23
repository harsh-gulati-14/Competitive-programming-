//1.we have to first chekc the numbers that are present 

#include <bits/stdc++.h>  
using namespace std;
typedef long long int ll;
#define vec vector<int>
#define pb emplace_back
#define mp make_pair 
#define ma unordered_map<ll,ll> 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,l,m;
    cin>>m;
    while(m--)
    {
        ma m1,m2,m3;
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            m1[a[i]]++;
            m2[b[i]]++;
            m3[a[i]]++;
            m3[b[i]]++;
        }
        ll f=1;
        for(auto x:m3)
        {
            if(x.second&1)
            {
                f=0;
                break;
            }
        }
        for(auto x:m3)
        {
        	// cout<<x.first<<" "<<x.second<<"\n";
        }
        if(f)
        {
            for(auto x:m1)
            {
                ll r=m1[x.first];
                if(m1[x.first]>m2[x.first])
                {
                    m1[x.first]-=m2[x.first];
                    m2[x.first]=0;
                }
                else if(m1[x.first]<m2[x.first])
                {
                    m2[x.first]-=m1[x.first];
                    m1[x.first]=0;
                }
                else{
                    m1[x.first]=0;
                    m2[x.first]=0;
                }
            }
            ll p1,p2,s=0;
            p1=*min_element(a,a+n);
            p2=*min_element(b,b+n);
            p1=min(p1,p2);
        
        vec as,al,bs,bl;
        for(auto x:m1)
        {
        	if(x.second!=0)
        	{
        		if(x.first<=2*p1)  
        	{
        		as.insert(as.end(),x.second,x.first);
        	}
        	else{
        		al.insert(al.end(),x.second,x.first);
        	}
        	}
        }
        for(auto x:m2)
        {
        	if(x.second!=0)
        	{
        		if(x.first<=2*p1)
        	{
        		bs.insert(bs.end(),x.second,x.first);
        	}
        	else{
        		bl.insert(bl.end(),x.second,x.first);
        	}
        	}
        }
        for(auto x:bs)
        {
        	// cout<<x<<" ";
        }
        if(as.size()!=0 && bl.size()!=0)
        {
        	sort(bl.begin(),bl.end());
        	ll n=min(as.size(),bl.size());
        	while(as.size()!=0 && bl.size()!=0)
        	{
        		s+=as.back();
        		as.pop_back();
        		bl.pop_back();
        	}
        	// for(i=0;i<n;i++)
        	// {
        	// 	s+=as[i];
        	// }
        	// as.erase(as.begin(),as.begin()+n);
        	// bl.erase(bl.begin(),bl.begin()+n);
        }
        if(al.size()!=0 && bs.size()!=0)
        {
        	sort(al.begin(),al.end());
        	ll n=min(al.size(),bs.size());
        	while(bs.size()!=0 && al.size()!=0)
        	{
        		s+=bs.back();
        		bs.pop_back();
        		al.pop_back();
        	}
        	// for(i=0;i<n;i++)
        	// {
        	// 	s+=bs[i];
        	// }
        	// al.erase(al.begin(),al.begin()+n);
        	// bs.erase(bs.begin(),bs.begin()+n);
        }
        if(as.size()!=0 && bs.size()!=0)
        {
        	ll n=min(as.size(),bs.size());
        	sort(as.begin(),as.end());
        	sort(bs.begin(),bs.end(),greater<ll> ());
        	while(as.size()!=0)
        	{
        		s+=min(as.back(),bs.back());
        		as.pop_back();
        		bs.pop_back();
        	}
        }
        if(as.size()!=0)
        {   
            for(auto x:as)
            {
                s+=x;
            }
            as.clear();
        }
        if(bs.size()!=0)
        {   
            for(auto x:bs)
            {
                s+=x;
            }
            bs.clear();
        }
        // if(bl.size()!=0)
        // {   
        //     for(auto x:bl)
        //     {
        //         s+=(p1/2);
        //     }
        //     bl.clear();
        // }
        // if(al.size()!=0)
        // {   
        //     for(auto x:al)
        //     {
        //         s+=(p1/2);
        //     }
        //     al.clear();
        // }

        s+=(al.size()+bl.size())*p1;
        // s+=(as.size()+bs.size())*p1;
        cout<<s/2<<"\n";
    }
    else{
    	cout<<-1<<"\n";
    }
    }
}