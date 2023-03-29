/*
. Define a structure containing details of a Hotel like hotel name, address, number of rooms
charges. Create an array of 10 Hotels and get their details from the user. If the room charges
entered by the user is equal to the room charges of a Hotel then display all the details of that
Hotel.
*/

#include<stdio.h>

struct hotel
{
	char hname[20];
	char hadd[20];
	int hroom;
	int hprice;
};

main()
{
	struct hotel h[100];
	int no,i,total,c=0,y=0;
	int price;

	
	printf("\n ENTER THE LIMIT-->");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		fflush(stdin);
		printf("\n Enter the hotel name-->");
		gets(h[i].hname);
		
		fflush(stdin);
		
	    printf("\nEnter the location-->");
		gets(h[i].hadd);
		
		fflush(stdin);
		printf("\nEnter the rent of hotel-->");
		scanf("%d",&h[i].hprice);
		
	} 
	    printf("\n Enter your price budget-->");
		scanf("%d",&y);
		c=0;
		printf("\n\tname\tadd\tprice");	
	    for(i=0;i<no;i++)
	   {
		 	if(h[i].hprice<y)
	     	{
				printf("\n================================"); 
   	
	     		printf("\n%s  \t%s  \t%d",h[i].hname,h[i].hadd,h[i].hprice);
		 		c=1;
		 		
		 		printf("\n================================"); 
		 	}
		}
	
	if(c==0)
	{
		printf("\nsorry not found");
	}
}




