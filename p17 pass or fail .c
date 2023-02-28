#include<stdio.h>
main()

{
	int eng,ss,guj,total;
	
	printf("\nEnter the eng=>");
	scanf("%d",&eng);
	
	printf("\nEnter the ss=>");
	scanf("%d",&ss);
	
	printf("\nEnter the guj=>");
	scanf("%d",&guj);
	
	total=eng+ss+guj;
	printf("\ntotal=%d",total);
	
	if(total>50)
	{
		printf("\npass");
	}
	else
	{
		printf("\nfail");
    }
}








