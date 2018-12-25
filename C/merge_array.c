#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,m,a[100],temp;

	printf("Enter no. of elements u want to enter for array1:\n");       // Array 1
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter no. of elements u want to enter for array2:\n");     // Array 2
	scanf("%d",&m);
	printf("Enter the numbers\n");
	for(i=1;i<=m;i++)
		scanf("%d",&a[n+i]);
		
	printf("\nThe array elements are:\n");                                //Printing elements
	for(i=1;i<=n+m;i++)
	 printf("%d ",a[i]);
	 	
	for(i=1;i<=n+m;i++)                                                   //sorting in ascending order
	   {
	   	for(j=i+1;j<=n+m;j++)
	   	{
	   		if(a[i]>a[j])
	   		{
	   			temp=a[j];
	   			a[j]=a[i];
	   			a[i]=temp;
			 }
		   }
		}	
		
		printf("\nThe array elements in ascending order are:\n");          //Printing elements
		for(i=1;i<=n+m;i++)
	         printf("%d ",a[i]);
}
