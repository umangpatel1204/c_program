#include<stdio.h>

struct student
{
	int sid;
	char sname[20];
	int hindi,eng,total;
};

main()
{
	struct student s[100];
	int no,i,total;
	
	printf("\n ENTER THE LIMIT-->");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("\n Enter the sid-->");
		scanf("%d",&s[i].sid);
		
		fflush(stdin);
		printf("\n Enter the student name-->");
		gets(s[i].sname);
		
		printf("\nEnter the hindi marks-->");
		scanf("%d",&s[i].hindi);
		
		
		printf("\nEnter the eng marks-->");
		scanf("%d",&s[i].eng);
	}
	
	printf("\nsid\tsname\thindimarks\tengmarks\tTotal\tfail");
	printf("\n================================");
	
	for(i=0;i<no;i++)
	{
		total=s[i].hindi+s[i].eng;
		if(total<50)
		{
	    	printf("\n%d   \t%s   \t%d   \t%d   \t%d   \tfail",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
		}
}
	printf("\n==================================");
}  








