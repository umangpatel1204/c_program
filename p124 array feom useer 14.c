#include<stdio.h>
#define N 100
main()
{
	int i,n,a[N];
	int y,c=0;
	
	printf("\nEnter the limit=>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
    {
	printf("\nEnter the value of a[%d]=>",i+1);
	scanf("%d",&a[i]);
    }
    
    printf("\n Enter the search=>");
    scanf("%d",&y);
    
    for(i=0;i<n;i++)
    {
	if(a[i]==y)
	{
		c++;
	}
	}
	if(c==0)
	{
		printf("\n Value is not found");
	}
	else
	{
		printf("\nCount = %d",c);
	}
}


