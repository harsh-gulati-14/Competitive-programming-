#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
     int n,k;
     cin>>n>>k;
     int w[n];
     for(int i=0;i<n;i++)
     {
         cin>>w[i];
     }
     sort(w,w+n);
     k=min(k,n-k);
     int sum1=0,sum2=0;
     for(int i=0;i<k;i++)
     {
         sum1+=w[i];
     }
     for(int i=k;i<n;i++)
     {
         sum2+=w[i];
     }
     int maxdiff=0;
     maxdiff=sum2-sum1;
     cout<<maxdiff<<endl;
     
     
	    
	}
	
	
	return 0;
}

