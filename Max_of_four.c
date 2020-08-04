#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    if(a>d)
    {
        if(a>b)
        {
            if(a>c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
        else
        {
            if(b>c)
            {
                if(b>d)
                {
                    return b;
                }
                else
                {
                    return d;
                }
            }
            else
            {
                if(c>a)
                {
                    if(c>d)
                    {
                        return c;
                    }
                    else
                    {
                        return d;
                    }
                }
                else
                {
                    return a;
                }
            }
        }
    }
    else
    {
        if(d>b)
        {
            if(d>c)
            {
                return d;
            }
            else
            {
                return c;
            }
        }
        else
        {
            return b;
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}