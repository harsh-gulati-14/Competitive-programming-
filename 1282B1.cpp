#include<bits/stdc++.h>
using namespace std;
int dp[10][20];
int topdown(int a[],int n,int total)
{
	int inc=0,exc=0;
	// base case
//	if()
	if(total==0 || n==-1)
	{
		return 0;
	}
	// if
	if(dp[n][total]==-1)
	{
		if(a[n-1]<=total && n>=1)
		{
			inc+=topdown(a,n-2,total-a[n-1])+2;
		}
		exc+=topdown(a,n-1,total-a[n-1])+1;
		dp[n][total]=max(inc,exc);
		return dp[n][total];
	}
	//else
	else{
		return dp[n][total];
	}
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int i,j,k,l;
	int n,tot;
	cin>>n>>tot>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<topdown(a,n,tot)<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<=tot;j++)
		cout<<dp[i]<<" ";
	}
}
