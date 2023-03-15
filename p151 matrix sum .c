#include<stdio.h>
#define N 2
main()
{
	int a[N][N];
	int b[N][N];
	
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\n Enter the 1 matrix-->");
			scanf("%d",&a[i][j]);
		}
    }
		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\n Enter the 2 matrix-->");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nValue of A\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nValue of B\n");
		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	
	    printf("\nNew Metrix-->\n");
	    
		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

