#include<stdio.h>
main()
{
	int no1,no2;
	int opt;
	
	printf("\n Enter 1 for add=>");
	printf("\n Enter 2 for sub=>");
	printf("\n Enter 3 for mul=>");
	printf("\n Enter 4 for div=>");
	printf("\n Enter option=>");
	scanf("%d",&opt);
	
	switch(opt)
	{	
    case 1:
{		
		printf("Enter the no1=>");
		scanf("%d",&no1);
		printf("Enter the no2=>");
		scanf("%d",&no2);
		printf("\n add=%d",no1+no2);
		break;
}
    case 2:
{		
		printf("Enter the no1=>");
		scanf("%d",&no1);
		printf("Enter the no2=>");
		scanf("%d",&no2);
		printf("\n sub=%d",no1-no2);
		break;
} 
    case 3:
{		
		printf("Enter the no1=>");
		scanf("%d",&no1);
		printf("Enter the no2=>");
		scanf("%d",&no2);
		printf("\nmul=%d",no1*no2);
		break;
}
    case 4:
{		
	    printf("Enter the no1=>");
	    scanf("%d",&no1);
	    printf("Enter the no2=>");
	    scanf("%d",&no2);
	    printf("\ndiv=%d",no1/no2);
	    break;
}
	default:
		{
			printf("\n Wrong opt");
		}
}
}

