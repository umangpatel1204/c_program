#include<stdio.h>
 main()
 {
   char no;
 	int i, c=0, s1=0;
 	
 	printf("\n Enter the number=>");
 	scanf("%d",&no);
 	
 	for(i=1;i<=no;i++)
 	{
 		if(i%2==0)
 		{
 			printf("\n%d ",i);
 			c+=1;
 			s1+=i;
		}
 	}
 	printf("\n Total even numbers:%d",c);
    printf("\n Sum of even numbers:%d",s1);
}

