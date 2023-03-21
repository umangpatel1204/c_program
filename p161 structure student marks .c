#include<stdio.h>

struct student
{
	int sid;
	char sname[20];
	int hindi,eng;
};
main()
{
	struct  student s1,s2,s3;
	
	printf("\nEnter the student id-->");
	scanf("%d",&s1.sid);
	
	fflush(stdin);
	printf("\n enter the student name-->");
	gets(s1.sname);
	
	printf("\nEnter hindi marks-->");
	scanf("%d",&s1.hindi);
	
	printf("\nEnter eng marks-->");
	scanf("%d",&s1.eng);
	
	printf("\nEnter the student id-->");
	scanf("%d",&s2.sid);
	
	fflush(stdin);
	printf("\n enter the student name-->");
	gets(s2.sname);
	
	printf("\nEnter student hindi marks-->");
	scanf("%d",&s2.hindi);
	
	printf("\nEnter student eng marks-->");
	scanf("%d",&s2.eng);
	
	printf("\nEnter the student id-->");
	scanf("%d",&s3.sid);
	
	fflush(stdin);
	printf("\n enter the student name-->");
	gets(s3.sname);
	
	printf("\nEnter student hindi marks-->");
	scanf("%d",&s3.hindi);
	
	printf("\nEnter student eng marks-->");
	scanf("%d",&s3.eng);
	
	printf("\nS1's sid = %d sname = %s hindimarks = %d engmarks = %d",s1.sid,s1.sname,s1.hindi,s1.eng);
	printf("\nS2's sid = %d sname = %s hindimarks = %d engmarks = %d",s2.sid,s2.sname,s2.hindi,s2.eng);
	printf("\nS3's sid = %d sname = %s hindimarks = %d engmarks = %d",s3.sid,s3.sname,s3.hindi,s3.eng);
				
}
