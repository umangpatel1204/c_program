#include<stdio.h>

struct employee
{
	int eid;
	char ename[20];
	int salary;
};

main()
{
	struct employee e[100];
	int no,i;
	
	printf("\n ENTER THE LIMIT-->");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("\n Enter the employee id-->");
		scanf("%d",&e[i].eid);
		
		fflush(stdin);
		printf("\n Enter the employee name-->");
		gets(e[i].ename);
		
		printf("\nEnter the salary-->");
		scanf("%d",&e[i].salary);
	}
	
	printf("\neid\tename\tsalary");
	printf("\n================================");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s\t %d",e[i].eid,e[i].ename,e[i].salary);
	}
	printf("\n==================================");
}








