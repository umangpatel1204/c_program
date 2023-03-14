#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str1[10],str2[10];
	
	printf("\nEnter the str 1-->");
	scanf("%s",&str1);
    
	printf("\nEnter the str 2-->");
	scanf("%s",&str2);
	
	printf("\n Before coping:");
	printf("\nstr1:%s\t str:%s",str1,str2);
	
	strcpy(str2,str1);
	
	printf("\n After coping:");
	printf("\nstr1:%s\tstr2:%s",str1,str2);
	
	getch();
	
}

