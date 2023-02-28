#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\nEnter the no A=>>");
	scanf("%d",&a);
	
	printf("\nEnter the no B=>>");
	scanf("%d",&b);
	
	printf("\nEnter the no C=>>");
	scanf("%d",&c);
	
	if(a>b && a>c)
{
	printf("\nA is bigger");
}
 else if(b>a && b>c)
 {
 	printf("\nB is bigger");
 }
 else
    {
    	printf("\nC is bigger");
	}
}
