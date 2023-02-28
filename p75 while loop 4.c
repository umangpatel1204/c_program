#include<stdio.h>
main()
{
	int i,n;
	int no;
	
	printf("\nEnter the number=>");
	scanf("%d",&no);
	
	i=1;
	while(i<=no)
	{
	
	if(i%2==0)
	{
		printf("\n%d=> even number",i);
		i++;
	}
	else
	{
		printf("\n%d=> odd number",i);
		i++;
	}
}
}
