#include<stdio.h>
main()
{
	int i,n;
	int j;
	
	printf("\n Enter the value-->");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

