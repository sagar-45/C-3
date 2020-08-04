#include<stdio.h>
#include<string.h>
#include<errno.h>

extern int errno;
void main()
{
    FILE * pf;
    int errnum;
    pf = fopen("unexit.txt","rb");
    if(pf == NULL)
    {
        errnum = errno;
        fprintf(stderr,"Value of errno : %d\n",errno);
        perror("Error Printed by perror");
        fprintf(stderr,"Error Opening the file : %s\n",strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
}