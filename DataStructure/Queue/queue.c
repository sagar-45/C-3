//Queue using array
//simple queue
#include<stdio.h>
#include<stdlib.h>	
#define MAX 5
struct queue
{
	int items[MAX];
	int front,rear;	
}q;
void insert(int x)
{
	if(q.rear == MAX-1)
	{
		printf("Sorry, Queue is full\n");
		return;
	}
	if((q.front==-1)&&(q.rear==-1))
	{
		q.front++;
	}	
	q.rear++;
	q.items[q.rear] = x;
}
int rem()
{
	int x;
	if((q.front==-1)||(q.rear<q.front))
	{
		printf("Sorry, Queue is empty\n");
		return 0;
	}
	x = q.items[q.front];
	q.front++;
	return x;
}
	



int main()
{
	int ch;
	q.front = -1;
	q.rear = -1;
	int x;
	printf("\nWelcome to Perform Queue Operaions\n");
	while(1)
	{
		//display menu
		printf("\nMenu:\n");
		printf("1.Insert\n");
		printf("2.Remove\n");
		printf("3.Exit\n");

		//get the choice
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		//perform the specified operation
		switch(ch)
		{
			case 1:	printf("Enter an item to insert\n");
				scanf("%d",&x);
				insert(x);
				break;
			case 2:	x = rem();
				printf("Deleted item = %d\n",x);
				break;
			case 3:	printf("Thank you for using\n\n");
				exit(0);
		}

	}
}
