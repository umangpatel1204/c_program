#include<stdio.h>
main()
{
	float r,t;
	int p;
	printf("\nEnter principle value =>");
	scanf("%d",&p);
	
	printf("\nEnter rate =>");
	scanf("%f",&r);
	
	printf("\nEnter time=>");
	scanf("%f",&t);
	
	printf("\nsimple intrest=%.2f",(p*r*t)/100);
	
}
