#include<stdio.h>

main()
{
	float h,b,r;
	char opt;
	
	printf("\nEnter the t for area of tringle=>");
    printf("\nEnter the c for area of circle=>");	
    printf("\nEnter the option=>");
    scanf("%c",&opt);
    
    if(opt=='t' || opt=='T')
    {
    	printf("\nEnter hegiht =>");
    	scanf("%f",&h);
    	printf("\nEnter base =>");
    	scanf("%f",&b);
    	printf("\nArea of tri = %.2f",h*b*0.5);
	}
	else if(opt=='c' || opt=='C')
	{
		printf("\nEnter the radius=>");
		scanf("%f",&r);
		printf("\nArea of circle=%.2f",r*r*3.14);
    }
	else
	{
		printf("\nWrong opt");
	}
}
