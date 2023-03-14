#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	int i;
	
	printf("\n EEnter the string-->");
	scanf("%s",&str1);
    printf("\n Enter the string-->");
	scanf("%s",&str1);	
    
    i=strcmp(str1,str2);
    if(i==0)
    {
    	printf("Both strings are equal%d",i);
	}
	else
	{
		printf("Both strings are not equal%d",i);
	}
}
