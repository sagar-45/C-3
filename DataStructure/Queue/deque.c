#include<stdio.h>
#include<stdlib.h>
#define max 5
struct queue
{
	int items[max];
	int front,rear;
}q;
void init()
{
	q.front=max-1;
	q.rear=max-1;
}
void insert_at_end(int x)//no change
{
	if(q.rear==q.rear+1)
	{
		printf("queue is full\n");	
		return;
	}
	q.rear++;
	q.rear=q.rear%max;
	q.items[q.rear]=x;
}
void insert_at_start(int x)
{
	if(q.rear==q.rear+1)
	{
		printf("queue is full\n");	
		return;
	}
	q.items[q.front]=x;
	
	if(q.front==0)
	{
		q.front=max-1;
	}
	else
		q.front--;
}
int rem_at_start()//no change
{
	int x;
	if(q.front==q.rear)
	{
		printf("queue is empty\n");
		return 0;
	}
	q.front++;
	q.front=q.front%max;
	x=q.items[q.front];
	return(x);
}
int rem_at_end()
{
	int x;
	if(q.front==q.rear)
	{
		printf("queue is empty\n");
		return 0;
	}
	x=q.items[q.rear];
	if(q.rear==0)
	{
		q.rear=max-1;
	}
	else
		q.rear--;	
	
	return(x);
}
int main()
{
	int ch;
	int x;
	init();
	printf("\n Welcome to perform queue operation\n");
while(1)
{	//display menu
	printf("\nMenu:\n");
	printf("1.insert at end\n");
	printf("2.insert at start\n");
	printf("3.rem at start\n");
	printf("4.rem at end\n");
	printf("5.Exit\n");

	//get the choice
	printf("Enter your choice\n");
	scanf("%d",&ch);
	//perform the specified operation
switch(ch)
{
	case 1: printf("Enter an item to insert\n");
		scanf("%d",&x);
		insert_at_end(x);
		break;
	case 2: printf("Enter an item to insert\n");
		scanf("%d",&x);
		insert_at_start(x);
		break;
	case 3: x=rem_at_start();
		printf("Deleted items=%d\n",x);
		break;
	case 4: x=rem_at_end();
		printf("Deleted items=%d\n",x);
		break;
	case 5: printf("Thank you for using\n\n");
	exit(0);
		
}
}
}



