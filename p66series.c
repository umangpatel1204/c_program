#include<stdio.h>
main()
{
	int i,s=0,n;
		
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf(" %d + ",i);
		s+=i;
	}
	
	printf("\nSum = %d",s);
}
