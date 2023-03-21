#include<stdio.h>

struct employee
{
	int empid;
	char ename[20];
	int salary;
};

main()
{
	struct employee e1,e2,e3;
	
	printf("\nEnter the employee id-->");
	scanf("%d",&e1.empid);
	
	fflush(stdin);
	printf("\n enter the employee name-->");
	gets(e1.ename);
	
	printf("\nEnter employee salary-->");
	scanf("%d",&e1.salary);
	
	printf("\nEnter the employee id-->");
	scanf("%d",&e2.empid);
	
	fflush(stdin);
	printf("\n enter the employee name-->");
	gets(e2.ename);
	
	printf("\nEnter employee salary-->");
	scanf("%d",&e2.salary);
	
	printf("\nEnter the employee id-->");
	scanf("%d",&e3.empid);
	
	fflush(stdin);
	printf("\n enter the employee name-->");
	gets(e3.ename);
	
	printf("\nEnter employee salary-->");
	scanf("%d",&e3.salary);
	
	printf("\nE1's empid = %d ename = %s emp salary = %d",e1.empid,e1.ename,e1.salary);
	printf("\nE2's empid = %d ename = %s emp salary = %d",e2.empid,e2.ename,e2.salary);
	printf("\nE3's empid = %d ename = %s emp salary = %d",e3.empid,e3.ename,e3.salary);
				
}
