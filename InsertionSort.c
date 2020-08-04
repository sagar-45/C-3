#include<stdio.h>
void insertion_sort(int a[],int n)
{
	int i,k,y;
	for(k=1;k<n;k++)
	{
		y=a[k];
		for(i=k-1;i>=0&&y<a[i];i--)
		{
			a[i+1]=a[i];
		}
		a[i+1]=y;
	}
}
int main()
{
	int a[10],i,key,n,index;

	printf("\nEnter how many elements to store in an array:\n");
	scanf("%d",&n);

	printf("\nEnter %d elements:\n",n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	insertion_sort(a,n);

	printf("\nSorted elements are:\n");
	for (i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}
