//SOURCE CODE
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;
void enqueue(int x) {
	struct Node* temp = 
		(struct Node*)malloc(sizeof(struct Node));
	temp->data =x; 
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
void dequeue() {
	struct Node* temp = front;
	if(front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	free(temp);
}
void print() {
	struct Node* temp = front;
	if(temp == NULL) {
		printf("Queue is empty\n");
	}
	else{
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
	printf("\n");
}
int main()
{
	printf("THIS CODE IS WRITTEN BY HARSH GULATI (19BCT0210)\n");
	int k,x,n,ch,p;
	do {
		printf("\t*********List operations**********\n");
		printf("1.ENQUEUE ELEMENTS\n");
		printf("2.DEQUEUE ELEMENTS\n");
		printf("3.DISPLAY\n");
		printf("4.EXIT\n");
		printf("\t***********************************\n");
		printf("YOUR CHOICE \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\tEnter the element to be insert \n");
			scanf("%d",&x);
			enqueue(x);
			break;
			case 2:
			dequeue();
			break;
			case 3:
			print();
			break;
			case 4:
			exit(0);
			default:
			printf("\t Wrong choice enter\n");
		}
		}while(ch!=4);
	}


