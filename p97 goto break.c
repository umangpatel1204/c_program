#include<stdio.h>
main()
{
	int n,i;
	printf("\n Enter the number==>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==5 || i==7)
		{
			break;
		}
		printf("\n %d",i);
	}
}
