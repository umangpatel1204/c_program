#include <stdio.h>
int main() 
{
   int n,y, reversed = 0, remainder;
   printf("Enter an integer: ");
   scanf("%d", &n);
   
   y=n;
   while (n != 0) 
   {
      remainder = n % 10;
      reversed= reversed * 10 + remainder;
      n /= 10;
   }
   printf("Reversed number = %d\n", reversed);
   printf("\n n=%d",y);
   return 0;
   
   if(y==reversed)
   {
   	printf("\n it is palidrom number");
   }
   else
   {
   	printf("\n it is not palidrom number");
   }
}
