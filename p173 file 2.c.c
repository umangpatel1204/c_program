#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int c=0;
	
	f1=fopen("e:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			c++;
		}
	}
	
	fclose(f1);
	printf("\nCount = %d",c);
}

/*
1)vowel?
2) Upper? lower?
3)upper->lower , low->upper
4)space X
5)upperX
6)vowel 7 	


*/
