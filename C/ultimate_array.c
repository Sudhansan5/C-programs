#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p;
	printf("Enter array elements ");
	for(i=0;i<=9;i++)   //take elements
	{
		scanf("%d",&a[i]);  
	}
     
	 	for(i=0;i<=9;i++)       //print elements
	        	printf("%d ",a[i]);  
  
   	printf("\nEnter postn and no. u want to insert\n");     //insertion of a number
	scanf("%d %d",&p,&n);
	for(i=9;i>=p-1;i--)
		a[i+1]=a[i];
		a[p-1]=n;

	for(i=0;i<=10;i++)     //print elements
	   	printf("%d ",a[i]);
	
	printf("Enter postn whose element you what to delete");   //deletion of number at a postition
	scanf("%d",&p);
   for(i=p;i<=10;i++)   
   	a[i]=a[i+1];
	a[10]=0;
	
	for(i=0;i<=10;i++)     //print elements
	   	printf("%d ",a[i]);
}
