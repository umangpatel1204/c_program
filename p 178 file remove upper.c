#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int upper_count;
	
	f1=fopen("e:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
	   
	   if(isupper(ch))
		{
		}
		else
		{
			printf("%c",ch);
		}
	}
	
	fclose(f1);
}
