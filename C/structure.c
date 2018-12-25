#include<stdio.h>
void display(char*,float,int);
int main()
{
   struct book
   {
   	 char name;
   	 float price;
   	 int pages;
   }b1,b2,b3;
   scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
   display(b1.name,b1.price,b1.pages);
   return 0;
}
void display(char *s,float t,int n)
{

   printf("%c %f %d",s,t,n);
}

