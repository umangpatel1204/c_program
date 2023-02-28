#include<stdio.h>
main()
{
	int i,s=0,n;
	 
	printf("\nEnterr the limit=>");
    scanf("%d",&n);
	 
	for(i=1;i<=n;i++)
	{
	 	printf("%d +",i*i);
	 	s+=i*i;
    }
	 printf("\n sum = %d",s);
}
