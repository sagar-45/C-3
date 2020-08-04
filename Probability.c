#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int *arr,n;

void mean()
{
    float mean;

    for(int i=0;i<n;i++)
    {
        mean += arr[i];
    }
    mean = mean/n;
    printf("%.1f",mean);
}

void median()
{
    int tmp,mid;
    float median;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
              tmp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = tmp;  
            }
        }
    }

    mid = (0+(n-1))/2;
    median = arr[mid]+arr[mid+1];
    median = median/2;
    printf("\n%.1f",median);

}

void mode()
{
    int vector[n],max,equal=0,loc;

    for(int i=0;i<n;i++)
    {
        vector[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[i]==arr[j])
            {
                vector[i] += 1;
            }
        }
    }

    max = vector[0];
    
    for(int i=1;i<n;i++)
    {
        if(max<vector[i])
        {
            max = vector[i];
            loc = i;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vector[i]==vector[j])
            {
                equal = 1;
            }
            else
            {
                equal = 0;
            }
        }
    }

    if(equal == 1)
    {
        printf("\n%d",arr[0]);
    }
    else 
    {
        printf("\n%d",arr[loc]);
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d",&n);
    arr =(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mean();
    median();
    mode();

    return 0;
}
