#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,arr[100],sum=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}

