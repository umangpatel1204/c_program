#include <stdio.h>
int main() 
{
   int n, reversed = 0,remainder,y,sum;
   printf("Enter an integer: ");
   scanf("%d", &n);
   
    y=n;
   while (n!= 0) 
   {
      remainder = n % 10;
      sum=sum+(remainder*remainder*remainder);
      n /= 10;
   }
     
   printf("Reversed number = %d\n", reversed);
   printf("\n n=%d",y);
   if (sum==y)
   {
   	printf("\n it is armstrong number");
   }
   else
   {
   	printf("\n it is not armstrong number");
   }
}
