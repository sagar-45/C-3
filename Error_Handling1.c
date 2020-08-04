#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int num1,num2,result;

    printf("Enter two Number : ");
    scanf("%d %d",&num1,&num2);

    if(num2 == 0)
    {
        fprintf(stderr,"Cannot divied by Zero! Exiting........");
        exit(EXIT_FAILURE);
    }
    else
    {
        result = num1/num2;
        fprintf(stderr,"Result of Division is : %d",result);
        exit(EXIT_SUCCESS);
    }
}