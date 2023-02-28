#include<stdio.h>
main()
{
int dayno;

printf("\nEnter dayno =>");
scanf("%d",&dayno);


if(dayno==1)
{
	printf("\nMonday");
}
else if(dayno==2)
{
	printf("\nTuesday");
}
else if(dayno==3)
{
	printf("\nWenesday");
}
else if(dayno==4)
{
	printf("\nThurdsday");
}
else if(dayno==5)
{
	printf("\nFriday");
}
else if(dayno==6)
{
	printf("\nSaturday");
}
else if(dayno==7)
{
	printf("\nSunday");
}
else
{
	printf("\nSorry other dayno");	
}
	
}
