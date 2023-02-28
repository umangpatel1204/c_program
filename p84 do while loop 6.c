#include<stdio.h>
main()
{
	int i,n,s=1;
	
	printf("\nEnter the limit=>>");
	scanf("%d",&n);
	
	i=1;
	do
	{
		printf("%d x ",i);
		s*=i;
		i++;
	}
	while(i<=n);
	printf("\nSum = %d",s);
	
}
