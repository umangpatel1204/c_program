#include<stdio.h>
main()
{
	int i,n=7;

	int a[7]={15,52,84,30,15,7,9};
	int b[7]={45,18,62,76,20,40,8};
	
	for(i=n;i>=1;i--)
  {
	printf(" %d ",a[i]+b[i]);
  }  
}
