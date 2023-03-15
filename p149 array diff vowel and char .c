#include<stdio.h>
#define N 100
main()
{
   char name[100],v[100],o[100];
   int i,y,k=0,m=0;
   char ch;
   
   printf("\n enter the name-->");
   gets(name);
   
   y=strlen(name);
   for(i=0;i<y;i++)
   {
    	ch=name[i];
	    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
   	 {
   		v[k]=ch;
   		k++;
     }
 
   else
   {
   	 o[m]=ch;
   	 m++;
   }
}
   printf("\nvowels =%s",v);
   printf("\nothers =%s",o);

}

