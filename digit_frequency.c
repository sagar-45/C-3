#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[1000];
    int arr[10]={0,0,0,0,0,0,0,0,0},digit=0;
    
    scanf("%s",s);
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            digit = ((int)(s[i]-'0'));
            arr[digit]++;
        }
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}