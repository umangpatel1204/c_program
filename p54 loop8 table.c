#include<stdio.h>
 
 main()
 {
   int no;
 	int i;
 	
 	printf("\n Enter the number=>");
 	scanf("%d",&no);
 	
 	for(i=1;i<=10;i++)
 	{
 		printf("\n%d X %d = %d",no,i,no*i);
	 }
 }
