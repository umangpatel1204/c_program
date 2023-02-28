#include<stdio.h>
main()
{
	int no;
	int opt;
	
	printf("\nEnter 1 for Square");
	printf("\nEnter 2 for Cube");
	printf("\nEnter option =>");
	scanf("%d",&opt);
	
	
	if(opt==1)
	{
		printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\nsqure=%d",no*no);
	}
	else if(opt==2)
	{
		printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\ncube=%d",no*no*no);
	}
	else
	{
		printf("\nWrong opt");
	}
	
}


