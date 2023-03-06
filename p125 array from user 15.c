#include <stdio.h>
#define N 100
int main()
 {
   int a[N]; 
   int n, max,i;

   printf("Enter the limit=> ");
   scanf("%d", &n);
   
   for(i=0;i<n;i++) 
   {
      printf("Enter the value of a[%d]=>", i+1);
      scanf("%d", &a[i]);
   }
   max = a[i]; 
   
   for(i=0;i<n;i++)
    {
      if(a[i]>max) 
      max = a[i];
   }
   printf("Maximum value is=>>%d\n", max);
}

