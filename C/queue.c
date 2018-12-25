#include<stdio.h>
#include<stdlib.h>
#define size 5
int insert();
void del();
void display();
int queue[size],front=-1,rear=-1;
void main()
{   
    int ch,n;
    while(1)
	{
	printf("Choose\n");
	printf("1.Enter element\n2.Delete element\n3.Display elements\n4.Exit\n");
	scanf("%d",&ch);
		switch(ch)
			{
				case 1:
					printf("Enter the element\n");
					scanf("%d",&n);
					insert(n);
					break;
				case 2:
					del();
					break;
				case 3:
					display();
					break;
				case 4:
					exit(0);
				default:
					printf("Wrong choice\n");
			}
	}
}
int insert(int item)
{
	if((front==0 && rear==size-1) || (front==rear+1))
		printf("Queue is full\n");
	else if(rear==-1)
	{
		front++;
		rear++;
	}
	else if(rear==size-1 && front>0)
	    rear=0;
	else
	    rear++;
	queue[rear]=item;
}
void del()
{   
    if(front==-1)
        printf("Queue is empty\n");
    else if(front==rear)
    {
    	front=-1;
    	rear=-1;
	}
	else
    	front++;
}
void display()
{    int i;
	if(front>rear)
	{
		for(i=front;i<size;i++)
		    printf("%d ",queue[i]);
		for(i=0;i<=rear;i++)
		    printf("%d ",queue[i]);
	}
	else
	    for(i=front;i<=rear;i++)
	        printf("%d ",queue[i]);	
}

