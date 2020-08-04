#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int tmp=0,result=0;
    for(int i =1;i<=n;i++)
    {
      for(int j =i+1;j<=n;j++)
      {
        tmp = i&j;
        if(tmp<k)
        {
            if(tmp>result)
            {
                result = tmp;
            }
        }
      }
    }
    printf("%d\n",result);
    tmp = 0;
    result = 0;
    for(int i =1;i<=n;i++)
    {
      for(int j =i+1;j<=n;j++)
      {
        tmp = i|j;
        if(tmp<k)
        {
            result = tmp;
        }
      }
    }
    printf("%d\n",result);
    tmp = 0;
    result = 0;
    for(int i =1;i<=n;i++)
    {
      for(int j =i+1;j<=n;j++)
      {
        tmp = i^j;
        if(tmp<k)
        {
            if(tmp>=result)
            {
                result = tmp;
            }
        } 
      }
    }
    printf("%d\n",result);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
