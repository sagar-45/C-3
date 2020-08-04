#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int tmp = 0,sum = 0;
    
    for(int i=1;i<=5;i++)
    {
        tmp = n%10;
        sum = sum+tmp;
        n = n/10;
    }

    printf("%d",sum);
    
    return 0;
}

