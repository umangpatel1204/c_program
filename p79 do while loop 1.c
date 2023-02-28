#include<stdio.h>
main()
{
	int i,n;
	printf("\n Enter the limit=>");
	scanf("%d",&n);
	
	i=1;
	do
	{
		printf("%d+",i);
		i++;
	}
	while(i<=n);
}
