#include<stdio.h>
main()
{
	char name1[100];
	char name2[100];
	char ch;
	int y1,y2,n;
	
	printf("\n Enter the name-->");
	gets(name1);
	
    printf("\n Enter the name-->");
	gets(name2);
	
	y1=strlen(name1);
	y2=strlen(name2);
	
	printf("\n Length=%d",y1);
    printf("\n Length=%d",y2);
    
    if(y1>y2)
    {
    	printf("\n y1 is grater");
	}
	else if(y1<y2)
	{
		printf("\n y2 is grater");
	}
	else
	{
		printf("\n both are equal");
	}
}
