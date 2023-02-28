#include<stdio.h>
main()
{
	int i,no;
	
	printf("\nEnter the limit=>");
	scanf("%d",&no);
	
	i=1;
	while(i<=no)
	{
		if(i%2==0)
		{
			printf("\n%d",i);

		}
           i++;
	}
}
