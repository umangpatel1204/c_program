#include<stdio.h>
main()
{
	int no1,no2;
	char opt;
	
	printf("\nEnter m for add");
	printf("\nEnter n for sub");
	printf("\nEnter o for mul");
	printf("\nEnter p for div");
	printf("\nEnter option =>");
	scanf("%c",&opt);
	
	if(opt=='m'|| opt=='M')
	{
		printf("\nEnter the no1=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\nadd=%d",no1+no2);
	}
	else if(opt=='n' || opt=='N')
	{
		printf("\nEnter the no=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\nsub=%d",no1-no2);
	}
		else if(opt=='o' || opt=='O')
	{
		printf("\nEnter the no=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\nmul=%d",no1*no2);
	}
		else if(opt=='p' ||opt=='P')
	{
		printf("\nEnter the no=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\ndiv=%d",no1/no2);
	}
	else
	{
		printf("\nWrong opt");
	}
	
}

/*
1 area oftraingl
2 area of circle


*/

