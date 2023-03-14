#include<stdio.h>
#include<string.h>
#include<conio.h>

main()
{
	char str[20];
	
	printf("\n Enter the string-->>");
	gets(str);
	
	strlwr(str);
	printf("Lowered string is:%s",str);
}





