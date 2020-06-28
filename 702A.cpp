#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0,j=0,m=1,k;
	for(i=0;i<n;i++)	
	{
		cout<<m<<" "<<i<<"\n";
		k=m;
		m=1;
		j=i;
		while(true && j<=n-1)
		{
			if(a[j]>=a[j+1])
			{
				m=max(m,k);
				break;
			}
			j++;
			m++;
		}
		i=j-1;
	}
	cout<<k;
}
