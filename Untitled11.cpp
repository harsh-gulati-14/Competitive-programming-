#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 1000001; 
long factor[MAX] = { 0 }; 

int calculateNoOFactors(int n) 
{ 
	if (n == 1) 
		return 1; 

	int ans = 1; 
	int dup = factor[n]; 
	int c = 1; 
	int j = n / factor[n]; 
	while (j != 1) { 
		if (factor[j] == dup) 
			c += 1; 
		else { 
			dup = factor[j]; 
			ans = ans * (c + 1); 
			c = 1; 
		} 
		j = j / factor[j]; 
	} 
	ans = ans * (c + 1); 

	return ans; 
} 
int smallest(int n) 
{ 
	for (int i = 1;; i++) 
		if (calculateNoOFactors(i) >= n) 
			return 1; 
} 
int main() 
{ 

	generatePrimeFactors(); 
	long i,j,k,l;
	cin>>l;
	while(l--)
	{
	    cin>>i>>j;
	    if(smallest(i)==1)
	    {
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    }
	
} 

