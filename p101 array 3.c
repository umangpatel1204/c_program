#include<stdio.h>
main()
{
	int i,n=7;
	int a[7]={12,90,73,11,44,93,68};
	for(i=1;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d it is even number",a[i]);
		}
		else
		{
			printf("\n%d it is odd number",a[i]);
		}
	}
}
