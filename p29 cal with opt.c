#include<stdio.h>
main()
{
	int no1,no2;
	int opt;
	
	printf("\nEnter 1 for add");
	printf("\nEnter 2 for sub");
	printf("\nEnter 3 for mul");
	printf("\nEnter 4 for div");
	printf("\nEnter option =>");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		printf("\nEnter the no1=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\nadd=%d",no1+no2);
	}
	else if(opt==2)
	{
		printf("\nEnter the no=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\nsub=%d",no1-no2);
	}
		else if(opt==3)
	{
		printf("\nEnter the no=>");
		scanf("%d",&no1);
		printf("\nEnter the no2=>");
		scanf("%d",&no2);
		printf("\nmul=%d",no1*no2);
	}
		else if(opt==4)
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

