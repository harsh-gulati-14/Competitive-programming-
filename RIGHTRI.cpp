#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d1,s=0,d2,d3,m1,m;
	int n;
	cin>>n;
	while(n--)
	{
	int n;
	cin>>n;
		int x1,x2,x3,y1,y2,y3,d=0;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		d1=abs(pow(x2-x1),2)+abs(pow(y2-y1),2);
		d2=abs(pow(x3-x1),2)+abs(pow(y3-y1),2);
		d3=abs(pow(x3-x2),2)+abs(pow(y3-y2),2);
		m1=max(d1,d2);
		m=max(m1,d3);
		if((d1+d2-m)==0 || (d3+d2-m)==0 || (d1+d3-m)==0)
		{
			s++;
		}
}
cout<<s;
}
