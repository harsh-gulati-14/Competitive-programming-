#include<bits/stdc++.h>
using namespace boost::multiprecision; 
using namespace std; 
  
cpp_int boost_factorial(int num) 
{ 
    cpp_int fact = 1; 
    for (int i=num; i>1; --i)     
        fact *= i; 
    return fact; 
} 
  
int main() 
{   
    int i,j,l;
    cin>l;
    while(l--)
    {
    cin>>i;
    cout<<fact(i)<<endl;
    }
    return 0; 
}
