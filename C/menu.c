#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	
    int choice,a,b,s; 
    
    	
    printf("1.Sum of two nos");
    printf("\n2.Odd or Even");
    printf("\n3.N natural nos");
    printf("\n4.Exit");
    while(1)
    {
	printf("\n\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nEnter two nos");
        scanf("%d %d",&a,&b);
        s=a+b;
        printf("sum of two no is %d",s);
        break;
        case 2:
        printf("\nEnter a no");
        scanf("%d",&a);
        if(a%2==0)
        printf("The no is even");
        else
        printf("The no is odd");
        break;
        case 3:
        printf("\nEnter a no");
        scanf("%d",&a);
        printf("The first n natural nos are");
        for(b=1;b<=a;b++)
        printf(" %d",b);
        break;
        case 4: exit(0);
            
         
        default:
        printf("\nWrong choice");
      }
       getch();
        
    
 }
}
