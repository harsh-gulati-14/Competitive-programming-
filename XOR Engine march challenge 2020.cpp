#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k=0,l=0,c,n,m;
    cin>>l;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c=b[i]^a[j];
		unsigned int count = 0; 
	    while (c) { 
	        count += c & 1; 
	        c >>= 1; 
	    	} 
			if(count%2==0)
			{
				k++;
			}
			else{
				j++;
			}
		}
		cout<<k<<j<<endl;
	}
} 	
