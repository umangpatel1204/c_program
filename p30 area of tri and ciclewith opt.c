#include<stdio.h>

main()
{
	float h,b,r;
	int opt;
	
	printf("\nEnter the 1 for area of tringle=>");
    printf("\nEnter the 2 for area of circle=>");	
    printf("\nEnter the option=>");
    scanf("%d",&opt);
    
    if(opt==1)
    {
    	printf("\nEnter hegiht =>");
    	scanf("%f",&h);
    	printf("\nEnter base =>");
    	scanf("%f",&b);
    	printf("\nArea of tri = %.2f",h*b*0.5);
	}
	else if(opt==2)
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
