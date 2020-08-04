#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *file;
    char *data;
    
    file = fopen("sample.txt","w");
    data=malloc(1000*sizeof(char));

    if(file == NULL)
    {
        fprintf(stderr,"File Does not Exits.......");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Enter Some data :");
        scanf("%[^\n]",data);

        fputs(data,file);
        fclose(file);
    }   
}