#include<stdio.h>

main()
{
	char alphabet;
	
	printf("Enter the alphabet=>");
	scanf("%c",&alphabet);
	
	if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
	{
		printf("\n it is vowel");
	}
	else
	{
		printf("\n it is other alphabet");
	}
}
