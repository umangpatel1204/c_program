#include<stdio.h>
main()
{
	int i,n=7;
	int a[7]={12,16,8,10,7,13,5};
	int b[7]={};
	int c[7]={};

   for (i=0;i<n;i++)
	{
		b[i]=a[i]*a[i];
		c[i]=a[i]*a[i]*a[i];
	}
	printf("\n After");
	for(i=0;i<n;i++)
	{
		printf("\n%d---%d---%d",a[i],b[i],c[i]);
	}
}
