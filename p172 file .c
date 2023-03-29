#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	
	f1=fopen("e:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
	}
	
	fclose(f1);
}
