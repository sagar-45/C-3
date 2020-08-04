#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int ino1,ino2;
    float fno1,fno2;

    scanf("%d %d",&ino1,&ino2);
    scanf("%f %f",&fno1,&fno2);
    printf("%d %d\n",ino1+ino2,ino1-ino2);
    printf("%0.1f %0.1f",fno1+fno2,fno1-fno2);
    return 0;
}

