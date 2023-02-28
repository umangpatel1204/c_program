#include<stdio.h>
 
 main()
 {
   int no;
 	int i;
 	
 	printf("\n Enter the number=>");
 	scanf("%d",&no);
 	
 	for(i=1;i<=no;i++)
 	{
 		if(i%2==0)
 	{
 	 printf("\n%d === even number",i);
    }
    else
    {
    	printf("\n%d === odd number",i);
	}
	}
 }

