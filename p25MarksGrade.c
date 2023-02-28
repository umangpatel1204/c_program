#include<stdio.h>
main()
{
	int eng,hindi,ss,total; // total 0-50 C , 50-100 B , >100 A
	
	printf("\nEnter marks of eng=>");
	scanf("%d",&eng);
	
	printf("\nEnter marks of hindi=>");
	scanf("%d",&hindi);
	
	printf("\nEnter marks of ss=>");
	scanf("%d",&ss);
	
	total=eng+hindi+ss;
	
	printf("\nTotal = %d",total);
	
	if(total>0 && total<=50)
	{
		printf("\ngrade C");
	}
	else if(total>50 && total<=100)
	{
		printf("\ngrade B");
	}
	else
	{
		printf("\ngrade A");
	}
}
