#include<stdio.h>

main()
{
	int hindi,guj,eng,total;
	
	printf("Enter the hindi marks=>");
	scanf("%d",&hindi);
	
	printf("\nEnter the guj marks=>");
	scanf("%d",&guj);
	
	printf("\nEnter the eng marks=>");
	scanf("%d",&eng);
	
	total=hindi+guj+eng;
	
	printf("\nTotal = %d",total);
}
