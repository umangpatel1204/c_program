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
		printf("\n Enter the value=>");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
     for(i=n-1;i>=1;i--)
  {
	printf(" %d ",a[i]);
  }  
}

