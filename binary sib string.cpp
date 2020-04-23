#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s[10],a,b;
	int i,j,k,l;
	getline(cin,s);
	//k=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(strcmp(s," ")==0)
		{
			a=i+1;
			break;
		}
	}
	cout<<a;
}
