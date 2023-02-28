#include<stdio.h>
main()
{
	int no;
	int opt;
	
	printf("\n Enter 1 for squre=>");
	printf("\n Enter 2 for cube=>");
	printf("\n Enter the option=>");
	scanf("%d",&opt);
	
	switch (opt)
	{
		case 1:
			{
				printf("\n Enter the squre=>");
				scanf("%d",&no);
				printf("\n squre=%d",no*no);
				break;
			}
		case 2:
			{
				printf("\n Enter the cube=>");
				scanf("%d",&no);
				printf("\n cube=%d",no*no*no);
				break;
			}
			default:
				{
					printf("\n Wrong opt");
				}
	}
}
