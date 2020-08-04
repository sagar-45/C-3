#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    printf("Do You Want To ShutDown Your Computer (y/n) : ");
    scanf("%c",&ch);
    if(ch=='Y'||ch=='y')
    {
        system("C:\\Windows\\System32\\shutdown -s -t 10");
    }
}