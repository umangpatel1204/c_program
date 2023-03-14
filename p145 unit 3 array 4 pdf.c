#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char name[25],sur_name[10];
	int l,k;
	
	printf("\n enter two string-->");
	scanf("%s %s",&name,&sur_name);
	strcat(name,"");
	strcat(name,sur_name);
	
	printf("string after join opration is %s",name);
	
}
