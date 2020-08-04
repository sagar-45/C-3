#include<stdio.h>
#include<stdlib.h>	
struct node
{
  int info;
  struct node*next;
}*list; int n,x,i;
	struct node*q,*p;
void insert()
{
	//for insertion
	printf("how many nodes\n");
	scanf("%d",&n);
	printf("enter the data\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		q=(struct node*)
		  malloc(sizeof(struct node));
		q->info=x;
		q->next=NULL;
		if(list==NULL)
		{
			list=q;
		}
		else
		{
			p=list;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=q;
		}
	}
}
int delete()
{
	//for deletion
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
void display()
{
	//for display
	printf("list is\n");
	for(p=list;p!=NULL;p=p->next)
	{
		printf("%d->",p->info);
	}
	printf("NULL");
}
int main()
{
	int ch;
	int x;
	list=NULL;	
	printf("\nWelcome to Perform Operaions on Singly linked list\n");
	while(1)
	{
		//display menu
		printf("\nMenu:\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit\n");

		//get the choice
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		//perform the specified operation
		switch(ch)
		{
			case 1:	insert();
				break;
			case 2:	x = delete();
				printf("Deleted item = %d\n",x);
				break;
			case 3:	printf("List is\n\n");
				display();
				break;
			case 4:	printf("Thank you for using\n\n");
				exit(0);
		}

	}
}
