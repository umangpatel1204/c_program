#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int n,i,c=0,c1=0,s=0,s1=0;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the value=>");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
		{
			printf("\n%d ==>it is even number",a[i]);
			c+=1;
			s+=a[i];
		}
		else
		{
			printf("\n%d ==>it is odd number",a[i]);
			c1+=1;
			s1+=a[i];
		}
	}
	printf("\ncount even number:>%d",c);
    printf("\ncount odd number:>%d",c1);
    printf("\nsum of total even number:>%d",s);
    printf("\nsum of total  odd number:>%d",s1);
}

