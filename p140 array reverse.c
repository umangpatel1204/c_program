#include<stdio.h>
main()
{
	char alphabet[26];
	int i,y;
	char ch;
	
	printf("\n Enter the name-->");
	gets(alphabet);
	
	y=strlen(alphabet);
	
	for(i=y-1;i>=0;i--)
	{
	   ch=alphabet[i];
	printf("%c",ch);
    }
}
