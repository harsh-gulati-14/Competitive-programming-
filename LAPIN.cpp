#incldue<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,c,m;
	cin>>l;
	while(l--)
	{
		char a[1000],l[26],r[26];
		cin>>a;
		k=strlen(a);
		if(k&1)
		{
			c=0;
			m=0;
			for(i=0;i<k/2;i++)
			{
				l[c++]=a[i]-'a';
			}
			for(i=k/2+1;i<k;i++)
			{
				r[m++]=a[i]-'a';
			}
		}
		else{
			c=0;
			m=0;
			for(i=0;i<k/2;i++)
			{
				l[c++]=a[i]-'a';
			}
			for(i=k/2;i<k;i++)
			{
				r[c++]=a[i]-'a';
			}
		}
		int f=1;
		for(i=0;i<26;i++)
		{
			if(l[i]=!r[i])
			{
				f=0;
				break;
			}
		}
		if(f==0)
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}
