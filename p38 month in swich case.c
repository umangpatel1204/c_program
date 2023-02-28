#include<stdio.h>
main()
{
int monthno;

printf("\nEnter monthno =>");
scanf("%d",&monthno);


switch(monthno)
{	
case 1:
{
	printf("\nJanuary");
	break;
}
case 2:
{
	printf("\nFebruary");
    break;  
}
case 3:
{
	printf("\nMarch");
	break;
}
case 4:
{
	printf("\nApril");
	break;
}
case 5:
{
	printf("\nMay");
	break;
}
case 6:
{
	printf("\nJune");
	break;
}
case 7:
{
	printf("\nJuly");
	break;
}
case 8:
{
	printf("\nAugest");	
	break;
}
case 9:
{
	printf("\nSeptmber");
	break;
}
case 10:
{
	printf("\nOctomber");
	break;
}
case 11:
{
	printf("\nNevmber");
	break;
}
case 12:
{
	printf("\nDecmber");
	break;
}
default:
{
	printf("You are alien");
}
}
}
