#include<stdio.h>
#define N 100
main()
{
	int a[N],b[N];
	int n,i;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the value of A=>");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Enter the value of B=>");
		scanf("%d",&b[i]);
}
	printf("\nEnter the a=>");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n Enter the b=>");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n total");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]+b[i]);
    }
}

