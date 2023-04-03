#include<stdio.h>
main()
{
	int i,n;
	int j;
	int k;
	
	printf("\n Enter the value-->");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=n;j>=i;j--) 
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
	{
		printf("%d",k);
		k++;
	}
		printf("\n");
	}
}


