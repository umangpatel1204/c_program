#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char ch;
	int upper;
	
	f1=fopen("e:\\abc.txt","r");
	
	f2=fopen("e:\\pqr.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		
	   if(isupper(ch))
		{
			
		}
		else
		{
			putc(ch,f2);
		}
	}
	
	fclose(f1);
	fclose(f2);
	printf("\nCopied");
}
