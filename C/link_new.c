#include<stdio.h>
#include<stdlib.h>
void display();
void insert();
 struct node{
    	int data;
    	struct node* link;
	};
	struct node* root=NULL;
void main()
{  
    	printf("Enter 5 elements\n");
    	insert();
    	display();
}
void insert()
{
	 int i;
	   struct node* temp;
	   temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	root=temp;
	for(i=1;i<5;i++)
	{   temp=(struct node*)malloc(sizeof(struct node));
	    temp->link=temp;
		scanf("%d",&temp->data);	
		temp->link=NULL;	
	}
	
//	printf("%d",temp->link);
}
void display()
{
	struct node* p;
	p=root;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->link;
	}
}
