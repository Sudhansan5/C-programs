#include<stdio.h>
#include<conio.h>
void array();
void main()
{
	int a[100],i;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	array(a);
}
void array(int b[])
{    int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
}
