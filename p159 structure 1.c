#include<stdio.h>

struct movie
{
	int mid;
	char mname[20];
	int year;
};

main()
{
	struct movie m1,m2,m3;
	
	printf("\nEnter the movie id-->");
	scanf("%d",&m1.mid);
	
	fflush(stdin);
	printf("\n enter the movie name-->");
	gets(m1.mname);
	
	printf("\nEnter movie release year-->");
	scanf("%d",&m1.year);
	
	printf("\nEnter the movie id-->");
	scanf("%d",&m2.mid);
	
	fflush(stdin);
	printf("\n enter the movie name-->");
	gets(m2.mname);
	
	printf("\nEnter movie release year-->");
	scanf("%d",&m2.year);
	
	printf("\nEnter the movie id-->");
	scanf("%d",&m3.mid);
	
	fflush(stdin);
	printf("\n enter the movie name-->");
	gets(m3.mname);
	
	printf("\nEnter movie release year-->");
	scanf("%d",&m3.year);
	
	printf("\nM1's mid = %d mname = %s releaseyear = %d",m1.mid,m1.mname,m1.year);
	printf("\nM2's mid = %d mname = %s releaseyear = %d",m2.mid,m2.mname,m2.year);
	printf("\nM3's mid = %d mname = %s releaseyear = %d",m3.mid,m3.mname,m3.year);
				
}
