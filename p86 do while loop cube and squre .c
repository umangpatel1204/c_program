#include<stdio.h>
main()
{
	int no;
	int opt;
	do
	{
	printf("\n Enter 1 for squre");
	printf("\n Enter 2 for cube");
	printf("\n Enter 3 for exit");
	printf("\n Enter option=>");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		printf("\n Enter the no:>");
		scanf("%d",&no);
		printf("\nsqure=%d",no*no);
	}
	else if(opt==2)
	{
		printf("\n Enter the no:>");
		scanf("%d",&no);
		printf("\ncube=%d",no*no*no);
	}
	else if(opt==3)
	{
		printf("\n Bye Bye>");
	}
	else
	{
		printf("\n Wrong opt");
	}
	} while(opt!=3);
}
