#include<stdio.h>
main()
{
	int i,s=0,n;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		printf("1/%d + ",i);
		s+=i;
	}
	printf("\n Sum = %d",s);
}
