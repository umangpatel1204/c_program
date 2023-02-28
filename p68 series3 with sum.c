#include<stdio.h>
main()
{
	int i,s=0,n;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	{
		printf("%d + ",i*i);
		s+=i*i;
	}
	else
	{
		printf("%d + ",i*i*i);
		s+=i*i*i;
	}
	}
	printf("\nsum=%d",s);
}
