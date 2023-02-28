#include<stdio.h>
main()
{
	int no;
	char opt;
	do
	{
	printf("\n Enter S for squre");
	printf("\n Enter C for cube");
	printf("\n Enter E for exit");
	printf("\n Enter option=>");
	fflush(stdin);
	scanf("%c",&opt);
	
	if(opt=='s'|| opt=='S')
	{
		printf("\n Enter the no:>");
		scanf("%d",&no);
		printf("\nsqure=%d",no*no);
	}
	else if(opt=='c'|| opt=='C')
	{
		printf("\n Enter the no:>");
		scanf("%d",&no);
		printf("\ncube=%d",no*no*no);
	}
	else if(opt=='e'|| opt=='E')
	{
		printf("\n Bye Bye>");
	}
	else
	{
		printf("\n Wrong opt");
	}
	} while(opt!='e'|| opt!='E');
}
