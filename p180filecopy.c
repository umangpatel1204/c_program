#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char ch;
	int c=0; 
	
	f1=fopen("e:\\abc.txt","r");
	
	f2=fopen("e:\\pqr.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		putc(ch,f2);
	}
	
	fclose(f1);
	fclose(f2);
	printf("\nCopied");
}

/*
1)vowel? print
2) Upper? 2 lower? 3
3)upper->lower , low->upper
4)space X 
5)upperX
6)vowel 7 	


*/
