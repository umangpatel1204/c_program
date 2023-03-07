#include <stdio.h>
#define N 100
main()
 {
   int n, i,j=0,k=0;
   int a[N],b[N],c[N];

   printf("Enter the limit=>");
   scanf("%d",&n);
   
      for(i=0;i<n;i++)
	{
	printf("\nEnter the value of a[%d]=>",i+1);
    scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++) 
	  {
      if(a[i]%2==0) 
	  {
         c[j] = a[i];
         j++;
      } else 
	  {
         b[k]=a[i];
         k++;
      }
   }
   printf("\nEven numbers are=> ");
   for(i=0;i<j;i++) 
   {
      printf("%d ",c[i]);
   }
   printf("\nOdd numbers are=>");
   for(i=0; i<k; i++) 
   {
      printf("%d ",b[i]);
   }
   return 0;
}

