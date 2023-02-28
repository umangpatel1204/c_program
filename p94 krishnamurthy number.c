#include<stdio.h>
main()
{
	int i,n,y,sum=0,revversed=0,reminder,f;
	
	printf("\nEnter the number =>");
	scanf("%d",&n);
	y=n;
	
	while (n!=0)
	{
		reminder=n%10;
		f=1;
		
		for(i=1;i<=reminder;i++)
		{
			f=f*i;
		}
		sum=sum+f;
		n/=10;
	}
	printf("\n=%d",sum);
	if(sum==y)
	{
		printf("\n no is krishnamurthy:");
	}
	else
	{
		printf("\n no is not krishnamurthy:");
	}
}

