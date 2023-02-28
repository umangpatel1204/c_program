#include<stdio.h>
 main()
 {
    char no;
 	int i,c=0,s=0,s1=0,c1=0;
 	
 	printf("\n Enter the no=>");
 	scanf("%d",&no);
 	
 	for(i=1;i<=no;i++)
 	{
 		if(i%2==0)
 		{
 			printf("\n%d no is even",i);
 			c+=1;
 			s+=i;
     	}
    
	   else
    	{
		printf("\n%d no is odd",i);
		c1+=1;
		s1+=i;
    	}
	}
	printf("\n Total even numbers:%d",c);
    printf("\n Total odd numbers:%d",c1);
   	printf("\n Total even numbers:%d",s);
    printf("\n Total odd numbers:%d",s1);
}

