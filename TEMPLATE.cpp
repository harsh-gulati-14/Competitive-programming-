// C++ program to prlong long prlong long all primes smaller than 
// n using segmented sieve 
#include <bits/stdc++.h> 
using namespace std; 
void simpleSieve(long long limit, vector<long long> &prime) 
{ 
	bool mark[limit+1]; 
	memset(mark, true, sizeof(mark)); 

	for (long long p=2; p*p<limit; p++) 
	{ 
		if (mark[p] == true) 
		{ 
			for (long long i=p*2; i<limit; i+=p) 
				mark[i] = false; 
		} 
	} 	for (long long p=2; p<limit; p++) 
	{ 
		if (mark[p] == true) 
		{ 
			prime.push_back(p); 
			cout << p << " "; 
		} 
	} 
}
void segmentedSieve(long long n) 
{ 
	long long limit = floor(sqrt(n))+1; 
	vector<long long> prime; 
	simpleSieve(limit, prime); 
	long long low = limit; 
	long long high = 2*limit; 
	while (low < n) 
	{ 
		if (high >= n) 
		high = n; 
		bool mark[limit+1]; 
		memset(mark, true, sizeof(mark)); 
		for (long long i = 0; i < prime.size(); i++) 
		{ 
			long long loLim = floor(low/prime[i]) * prime[i]; 
			if (loLim < low) 
				loLim += prime[i]; 
			for (long long j=loLim; j<high; j+=prime[i]) 
				mark[j-low] = false; 
		} 
	/*	for (long long i = low; i<high; i++) 
			if (mark[i - low] == true) 
				cout << i << " "; */
		low = low + limit; 
		high = high + limit; 
	} 
} 
int main() 
{ 
	long long n = 100000; 
	segmentedSieve(n); 
	
	return 0; 
} 

