#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,n,s=0,N;
    cin>>l;
    while(l--)
    {
        s=0;
        cin>>N;
            long int a=(N-1)/3; 
            long int b=(N-1)/5;
            long int c=(N-1)/15; 
            long int sum=(3*a*(a+1)/2)+(5*b*(b+1)/2)-(15*c*(c+1)/2);
        cout<<sum<<endl;
    }
}
