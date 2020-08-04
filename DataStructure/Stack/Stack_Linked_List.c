/*10. Write a program to implement a stack using a linked list such that the push and pop
operations of stack still take O(1) time.
*/
#include<stdio.h>
#include<stdlib.h>	
struct node
{
  int info;
  struct node*next;
}*list; 
int n,x,i;
	struct node*q,*p;
void push(int x)
{
	q=(struct node*)malloc(sizeof(struct node));
	q->info=x;
	q->next=list;
	list=q;
}
int pop()
{
	int x;	
	if(list==NULL)
	{
		printf("list is empty");
		return;
	}
	else
	{
		p=list;
		list=list->next;
		x = p->info;
		free(p);
		return x;
	}
}
int main()
{
	int ch;
	list = NULL;
	int x;
	printf("\nWelcome to Perform Stack Operaions\n");
	while(1)
	{
		//display menu
		printf("\nMenu:\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Exit\n");

		//get the choice
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		//perform the specified operation
		switch(ch)
		{
			case 1:	printf("Enter an item to insert\n");
				scanf("%d",&x);
				push(x);
				break;
			case 2:	x = pop();
				printf("Deleted item = %d\n",x);
				break;
			case 3:	printf("Thank you for using\n\n");
				exit(0);
		}

	}
}
