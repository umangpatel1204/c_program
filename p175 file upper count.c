#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int upper_count=0,lower_count=0;
	
	f1=fopen("e:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			upper_count++;
		}
		if(islower(ch))
		{
			lower_count++;
		}
	}
	
	fclose(f1);
	printf("\n total upper are-->%d",upper_count);
	printf("\n total lower are-->%d",lower_count);
}
