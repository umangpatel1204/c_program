#include<stdio.h>
main()
{
	int i,n,s=1;
	
	printf("\nEnter the limit=>>");
	scanf("%d",&n);
	
	i=n;
	while(i>=1)
	{
		printf("%d x ",i);
		s*=i;
		i--;
	}
	printf("\nSum = %d",s);
}
