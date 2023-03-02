#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int n,i;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}

}
