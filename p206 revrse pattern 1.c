#include<stdio.h>
main()
{
	int i,n;
	int j,k;
	
	printf("\n Enter the value-->");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" * ");
		}
		printf("\n");
	}
}

