/*10. Write a program to implement a queue using a linked list
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
void insert(int x)
{
	q=(struct node*)malloc(sizeof(struct node));
	q->info=x;
	q->next=NULL;
	if(list==NULL)
	{
		list=q;
		return;
	}	
	p=list;
	while(p->next!=NULL)
	{
		p = p->next;
	}	
	p->next = q;
}
int delete()
{
	int x;	
	if(list==NULL)
	{
		printf("list is empty\n");
		exit(0);
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
	printf("\nWelcome to Perform Queue Operaions\n");
	while(1)
	{
		//display menu
		printf("\nMenu:\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
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
			case 2:	x = delete();
				printf("Deleted item = %d\n",x);
				break;
			case 3:	printf("Thank you for using\n\n");
				exit(0);
		}

	}
}
