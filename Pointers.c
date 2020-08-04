#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) 
{
    int ia,ib;
    ia = *a ;
    ib = *b ;
    
    *a = ia + ib;
    *b = abs(ia - ib);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

