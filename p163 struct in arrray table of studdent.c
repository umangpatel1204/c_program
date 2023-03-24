#include<stdio.h>

struct student
{
	int sid;
	char sname[20];
	int hindi,eng;
};

main()
{
	struct student s[100];
	int no,i;
	
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
	
	printf("\nsid\tsname\thindimarks\t engmarks");
	printf("\n================================");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s\t %d\t %d",s[i].sid,s[i].sname,s[i].hindi,s[i].eng );
	}
	printf("\n==================================");
}








