#include<stdio.h>
main()
{
	int i,n=7;
	int a[7]={12,-87,-35,45,90,75,-27};
	for(i=0;i<n;i++)
  {
	printf(" %d ",a[i]);
  }
    printf("\n After");
    for(i=0;i<n;i++)
    {
    	printf(" %d ",a[i]*-1);
	}
}
