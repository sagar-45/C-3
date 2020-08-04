//Stack using array
#include<stdio.h>
#include<stdlib.h>	
#define STACKSIZE 5
struct stack
{
	int items[STACKSIZE];
	int top;	
}s;
void push(int x)
{
	if(s.top == STACKSIZE-1)
	{
		printf("Sorry, Stack is full\n");
		exit(1);
	}
	s.top++;
	s.items[s.top] = x;
}
int pop()
{
	int x;
	if(s.top == -1)
	{
		printf("Sorry, Stack is empty\n");
		exit(1);
	}
	x = s.items[s.top];
	s.top--;
	return x;
}
	



int main()
{
	int ch;
	s.top = -1;
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
