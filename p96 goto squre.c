#include<stdio.h>
main()
{
	int no;
	shahpur:
	printf("\nEnter the number=>");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("\n squre=%d",no*no);
	}
	else
	{
		printf("\n Why enter nagative number:");
		goto shahpur;
	}
}
