#include <iostream>
using namespace std;
int main() {
	int i,j=0,k=0,l,n,a[1000];
	cin>>n;
	while(n--)
	{
	    cin>>l;
	    for(i=0;i<l;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<l/2;i++)
	    {
	        j=j+a[i];
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    for(i=(l/2)+1;i<l;i++)
	    {
	        k=k+a[i];
	    }
	    cout<<abs(k-j)<<endl;
	}
	return 0;
}
