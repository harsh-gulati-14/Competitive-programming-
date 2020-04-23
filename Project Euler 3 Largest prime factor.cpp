/* in this question basically what we are doing we are eleminating the factor of th number input 
this is also a way to find the prime number as if because a composite number is the multiplcation of 2 prime or 
one prime a done other and both other(that means it is not the factor with anyone)
so first we are running a for loop same like we od for checking a prime number and then inside that we are 
REDUCING THE PRIME UMBER PRESENT IN IT BY DIVIDING IT BY THE NUMBER UNTILL IT GIVES THE REMAINDER 0 AND ONCE IT GIVES WE WILL DIVIDE IT BY 
AN ANOTHER N8UMBER. WiTH THE help of this process our input number will reduce with a largest prime number which is not divisble by anything
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long i,j,k,l,x;
    cin>>l;
    while(l--)
    {
        cin>>x;
        for(i=2;i*i<=x;i++)
        {
            while(x%i==0 && x!=i)
            x=x/i;
        }
        cout<<x<<endl;
    }
}
