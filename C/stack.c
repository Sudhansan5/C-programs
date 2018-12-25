//stack implementation
#include<stdio.h>
#define CAPACITY 5
int push(int);
void pop();
void peek();
void display();
void exit();
int stack[CAPACITY],top=-1,ele;
void main()
{   
    int ch;
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Peek\n");
	printf("4.Display\n");
	printf("5.Exit\n");
	while(1)
{   
    printf("\nEnter ur choice\n");	
    scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
			printf("Enter the element: ");
			scanf("%d",&ele);
			push(ele);
			break;
			}
		case 2:
			{
			pop();
			break;
			}
		case 3:
			{
			peek();
			break;
		    }
		case 4:
			{
			display();
			break;
		    }
		case 5:
			{
			exit(0);
		    break;
			}
		default:
			printf("Invalid input\n");
	}
}
}
int isempty()
{
	if(top==-1)
	   return 1;
	else
	   return 0;
}
int push(int ele)
{
     if(isfull())
        return 0;
     else
         top++;
         stack[top]=ele;
}
int isfull()
{
	if(top==CAPACITY-1)
	   return 1;
	else
	   return 0;
}
void pop()
{
	if(isempty())
	  printf("List is empty\n");
	else
	  ele=stack[top];
	  top--;
}
void peek()
{
	if(isempty())
	  printf("List is empty\n");
	else
	  {
	    printf("%d\n",stack[top]);
	  }
}

void display()
{   
    int i;
	if(isempty())
	   printf("List is empty\n");
	else
	   {
	   	for(i=0;i<=top;i++)
	   	    printf("%d ",stack[i]);
	   }
}

