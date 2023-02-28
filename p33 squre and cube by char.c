#include<stdio.h>
main()
{
	int no;
	char opt;
	
	printf("\nEnter v for Square");
	printf("\nEnter g for Cube");
	printf("\nEnter option =>");
	scanf("%c",&opt);
	
	if(opt=='v' || opt=='V')
	{
		printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\nsqure=%d",no*no);
	}
	else if(opt=='g' || opt=='G')
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


