//Evaluate postfix expression
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
int eval(token,operand1,operand2)
{
	switch(token)
	{
		case '+':return (operand1+operand2);
		case '-':return (operand1-operand2);
		case '*':return (operand1*operand2);
		case '/':return (operand1/operand2);
	}
}
int main()
{
	char postfix[20],token;
	int i,x;
	int operand1,operand2,val;

	//Read postfix expression
	printf("Enter postfix expression\n");
	scanf("%s",postfix);
	
	//For each token
	for(i=0;postfix[i]!='\0';i++)
	{
		token = postfix[i];
		//if token is operand push it on to the stack
		if(isdigit(token))
		{
			x = token-48;
			push(x);
		}
		//otherwise pop two operands and perform operations specified 
		//by the token and push the result on to the stack
		else	
		{
			operand2 = pop();
			operand1 = pop();
			val = eval(token,operand1,operand2);
			push(val);
		}
	}

	//Pop the stack and print as a result
	val = pop();
	printf("Value of expression=%d\n",val);
}
/*
OUTPUT:
Enter postfix expression
653+9*+
Value of expression=78
*/
/*
Algorithm:
1.Start
2.Read postfix expression
3.For each token
	a. if token is operand push it on to the stack
	b. otherwise pop two operands and perform 
	   operations specified by the token and 
	   push the result on to stack
4.Pop the stack and print as a result
5.Stop 		
*/









