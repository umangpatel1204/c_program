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
	int no,i,total,c=0,c1=0;
	int opt;
	
	printf("\n ENTER 1 FOR PASS STUDENT");
	printf("\n ENTER 2 FOR FAIL STUDENT");
	printf("\n ENTER 3 FOR ALL RESULT");
	printf("\n ENTER THE OPTION-->");
	scanf("%d",&opt);
	
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
	
	if(opt==1)
	{
	printf("\nsid\tsname\thindimarks\tengmarks\tTotal\tpass\tfail");
	printf("\n================================");
	
	for(i=0;i<no;i++)
	{
		total=s[i].hindi+s[i].eng;
		if(total>30)
		{
	    	printf("\n%d   \t%s   \t%d   \t%d   \t%d   \tpass",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
		}
}
	printf("\n==================================");
    
}
    else if(opt==2)
  {
  	printf("\nsid\tsname\thindimarks\tengmarks\tTotal\tfail");
	printf("\n================================");
	
	for(i=0;i<no;i++)
	{
		total=s[i].hindi+s[i].eng;
		if(total<30)
	    {
	    	printf("\n%d   \t%s   \t%d   \t%d   \t%d   \tfail",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
    	}
    }
	printf("\n==================================");
	
}
	else if(opt==3)
	{
	printf("\nsid\tsname\thindimarks\tengmarks\tTotal\tpass\tfail");
	printf("\n================================");
	
	for(i=0;i<no;i++)
	{
		total=s[i].hindi+s[i].eng;
		if(total)
		{
	    	printf("\n%d   \t%s   \t%d   \t%d   \t%d   \tpass",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
		}
		else
		{
			printf("\n%d   \t%s   \t%d   \t%d   \t%d   \tfail",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
		}
}
}
	else
	{
		printf("\n Wrong option");
	}
}                                                                                                                              








