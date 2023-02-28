#include<stdio.h>
main()
{
	int no,no1;
	int i,s=0,c=0;
	
	printf("\n Enter the Limit==>");
	scanf("%d",&no);
	
	printf("\n divided by ==>");
	scanf("%d",&no1);

	for(i=0;i<=no;i++)
	
	if(i%no1==0)
	{
		printf("\n%d",i);
		c+=1;
		s+=i;
     }
	 printf("\n count of numbers:%d",c);
     printf("\n sum of numbers:%d",s);
}
