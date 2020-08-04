//Convert infix to postfix 
#include<stdio.h>
#include<stdlib.h>	
#define STACKSIZE 5
struct stack
{
	char items[STACKSIZE];
	int top;	
}s;
void push(char x)
{
	if(s.top == STACKSIZE-1)
	{
		printf("Sorry, Stack is full\n");
		exit(1);
	}
	s.top++;
	s.items[s.top] = x;
}
char pop()
{
	char x;
	if(s.top == -1)
	{
		printf("Sorry, Stack is empty\n");
		exit(1);
	}
	x = s.items[s.top];
	s.top--;
	return x;
}
char stackTop()
{
	char x;
	if(s.top == -1)
	{
		printf("Sorry, Stack is empty\n");
		exit(1);
	}
	x = s.items[s.top];
	return x;
}
int empty()
{
	if(s.top == -1)
		return 1;
	else
		return 0;
}
int prcd(token,operand1,operand2)
{
	switch(token)
	{
		case '*':return 1;
		case '/':return 1;
		case '+':return 2;
		case '-':return 2;
	}
}
int main()
{
	char infix[20],token,postfix[20];
	int i,x,j=0;
	s.top == -1;

	//Read infix expression
	printf("Enter infix expression\n");
	scanf("%s",infix);
	
	//For each token
	for(i=0;infix[i]!='\0';i++)
	{
		token = infix[i];
		//printf("\n%d\n",1);
		//if token is operand add it to postfix string
		if(isdigit(token))
		{
			printf("\n%d\n",2);
			postfix[j++] = token;
		}
		//otherwise
		// i. check precedence  ii. pop and add all operators to postfix string with higher precedence
		//iii. push the token
		else	
		{
			printf("\n%d\n",3);
			while(!empty())
			{
				printf("\n%c\n",stackTop());
				printf("\n%d\n",4);
				if(prcd(stackTop())<=prcd(token))
				{
					postfix[j++] = pop();
				}
			}
			push(token);
		}
	}
	//Repeatedly Pop the stack and add to postfix string
	while(!empty())
	{
		printf("\n%d\n",5);
		postfix[j++] = pop();
	}
	postfix[j++]='\0';
	printf("Postfix expression=%s\n",postfix);
}









