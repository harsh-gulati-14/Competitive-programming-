#include<iostream>
#include<map>
#include <bits/stdc++.h>
int main()
{
     ll i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
        ll n,k,l;
        cin>>n>>k>>l;
        if(n==1 && k==1 && l>0)
        {
        	cout<<1<<"\n";
        	continue;
        }
        if(n<=k*l && (k!=1))
        {
        	while(1)
        	{
        		if(n==0)
        		{
        			break;
        		}
        		for(i=1;i<=k;i++)
	        	{
	        		if(n)
	        		{
	        			cout<<i<<" ";
	        			n--;
	        		}
	        	}
        	}
        	cout<<'\n';
        }
        else{
        	cout<<-1<<"\n";
        }
    }
}
