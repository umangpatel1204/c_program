#include<stdio.h>
main()
{
	int i,n,s=1,no;
	
	printf("\nEnter the limit=>>");
	scanf("%d",&n);
	
	i=n;
	do
	{
		printf("%d x ",i);
		s*=i;
		i--;
	}
	while(i>=no);
	printf("\nSum = %d",s);
}
