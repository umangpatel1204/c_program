#include<stdio.h>
main()
{
	int i,n;
	int j,a;
	
	printf("\n Enter the value-->");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf(" ");
		}
	for(j=n;j>=i;j--)
	{
		printf("%d",i);
	}
		printf("\n");
	}
}


