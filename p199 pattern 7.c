#include<stdio.h>
main()
{
	int i,n;
	int j;
	
	printf("\n Enter the value-->");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) //1 2 3 4
	{
		for(j=1;j<=i;j++)//1 12 123 1234
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

