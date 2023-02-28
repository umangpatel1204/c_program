#include<stdio.h>
main()
{
	int n,y,i,sum=0,reminder;
	
	printf("\n Enter the number=>");
	scanf("%d",&n);
	y=n;
	
	while(n!=0)
	{
		reminder=n%10;
		sum=sum+reminder;
		n/=10;
	}
	printf("\nsum=%d",sum);
}
