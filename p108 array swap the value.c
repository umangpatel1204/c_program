#include<stdio.h>
main()
{
	int i,n=7;
	int a[7]={12,16,86,90,56,35,5};
	int b[]={};

   for (i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\n Value of B is");
	for(i=0;i<n;i++)
	{
		printf("\n %d",b[i]);
	}
}
