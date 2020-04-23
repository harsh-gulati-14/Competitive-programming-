#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,j,k,l;
	vector<int >v;
	cin>>l;
	while(l--)
	{
		string s;
		cin>>s;
		for(i=1;i<s.length();i++)
		{
			if(s[i]-'A'<=26)
			{
				v.push_back(i);
			}
		}
		for(i=0;i<v.size();i++)
		{
			s.insert(v[i],'_');
		}
		transform(s.begin(), s.end(), s.begin(), ::tolower); 
	}
	return 0;
}
