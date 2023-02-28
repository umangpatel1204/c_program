#include<stdio.h>
main()
{
	int i,no;
	
	printf("\nEnter the limit=>");
	scanf("%d",&no);
	
	i=1;
	do
	{
		if(i%2==0)
		{
			printf("\n%d",i);

		}
           i++;
	}
	while(i<=no);
}
