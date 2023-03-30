#include<stdio.h>

main()
{
	FILE *f1,*f2,*f3;
	char ch;
	int upper_count,lower_count; 
	
	f1=fopen("e:\\abc.txt","r");
	
	f2=fopen("e:\\pqr.txt","w");
	
	f3=fopen("e:\\xyz.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
			if(isupper(ch))
		{
			upper_count++;
		    putc(ch,f2);
	    }
	    if(islower(ch))
		{
			lower_count++;
			putc(ch,f3);
		}
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nCopied");
}
