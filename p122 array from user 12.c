#include<stdio.h>
#define N 100
main()
{
	int a[N],b[N],c[N];
	int n,i;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the value=>");
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i]*a[i];
		c[i]=a[i]*a[i]*a[i];
		printf("\n%d---%d---%d",a[i],b[i],c[i]);
	}

}

