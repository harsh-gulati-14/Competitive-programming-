#include<iostream>
#include<ios>      
#include<limits>
#include<string.h>
using namespace std;
struct emp{
	int emp;
	char empname[20];
	struct emp *next;
};
struct emp* insert(struct emp*front,int id,char name[])
{
	emp *temp;
	temp=new emp();
	temp->emp=id;
	strcpy(temp->empname,name);
	temp->next=front;
	front=temp;
	return (front);
}
void print(struct emp *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->emp<<" id"<<endl;
		cout<<temp->empname<<" name"<<endl;
		temp=temp->next;
	}
}
int main()
{
	int k=0;
	emp *empdata=NULL;
	for(k=0;k<2;k++)
	{
	int i;
	char name[20];
	cout<<"ENTER THE ID"<<endl;
	cin>>i;
	cin.sync();
	cout<<"ENTER THE NAME OF EMPLOYEE"<<endl;
	cin>>name;
	empdata=insert(empdata,i,name);
}
print(empdata);
}
