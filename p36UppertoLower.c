#include<stdio.h>

main()
{
	char alphabet;
	
	printf("Enter the alphabet=>");
	scanf("%c",&alphabet);
	
	if(isupper(alphabet))
	{
		printf("\n%c",tolower(alphabet));
	}
	else if(islower(alphabet))
	{
		printf("\n%c",toupper(alphabet));
	}
	else
	{
		printf("\n%c",alphabet);
	}
}
