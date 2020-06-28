#include<iostream>
#include<climits>
using namespace std;
bool solvewithrec(int n,int count,int mi=INT_MAX)
{
	if(n!=1 && count>200)
	{
		return false;
	}
	if(n==1)
	{
		mi=min(mi,count);
		cout<<mi<<"\n";
		return true;
	}
	bool solve;
	if(n%6==0)
	{
		n=n/6;
		solve=solvewithrec(n,count+1,mi);
		if(solve)
		{
			count++;
			//cout<<mi;
			return true;
		}
		else{
			count--;
			n=n/6;
		}
		return false;
	}
	if(!solve || n%6!=0)
	{
		n=n*2;
		bool solve=solvewithrec(n,count+1,mi);
		if(solve)
		{
			count++;
			//cout<<mi;
			return true;
		}
		else{
			count--;
			n=n/2;
		}
		return false;
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	if(!solvewithrec(n,0))
	{
		cout<<-1<<"\n";
	}
}
}