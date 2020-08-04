#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,arr[100000],i;
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=num;i>0;i--)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    return 0;
}

