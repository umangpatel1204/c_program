#include<stdio.h>
main()
{
	char name[200];
	int y;
	
	printf("\nEnter the name=>");
    gets(name);
	
	y=strlen(name);
	printf("\n length=%d",y);
}
