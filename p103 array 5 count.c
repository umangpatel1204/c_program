#include<stdio.h>
main()
{
	int i,n=7,c=0,c1=0,s=0,s1=0;
	int a[7]={12,56,39,80,23,48,11};
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
