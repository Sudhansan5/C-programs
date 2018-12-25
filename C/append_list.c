#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append();
void display();
void delete();
void insert();
int len();
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
int main()
{      
    int n;
    printf("Enter number of data u wanna enter:\n");
    scanf("%d",&n);
    printf("Enter node data\n");
    while(n--)
	    append();
	display();
	printf("The length of list is %d",len());
	printf("\nEnter the location u wanna delete\n");
	delete();
	display();
	insert();
	display();
}
void append()
{
	struct node* temp;
	struct node* p;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
			root=temp;
	else
	{
		p=root;
		while(p->link !=NULL)
	      	p=p->link;
		p->link=temp;	  	
	}		
	}
 void display()
{
	struct node* temp;
	temp=root;
   if(temp==NULL)
   {
    printf("List is empty");}
else
  {
  	while(temp!=0)
  	{
  		printf("%d ",temp->data);
  		temp=temp->link;
	  }
	  printf("\n");
  }
}
int len()
{   int count=1;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=root;
	while(temp->link!=NULL)
	  {
	  	temp=temp->link;
	  	count++;
	  }
	  return count;
}
void delete()
{     int loc;
    	scanf("%d",&loc);
	struct node* temp=root,*q;
	if(loc==1)
	{    
	 root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else if(loc>len())
	{
		printf("Location invalid\n");
	}
	else 
	{   
		int i=1;
		while(i<loc-1)
		{
			temp=temp->link;
			i++;
		}
		q=temp->link;
		temp->link=q->link;
		q->link=NULL;
		free(q);
	}
}
void insert()
{   int n,i=1;
	printf("Enter the position where u wanna insert a node\n");
	scanf("%d",&n);
	struct node* temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	p=root;
	while(i!=n-1)
	{
		p=p->link;
		i++;
	}
	printf("Enter the data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	temp->link=p->link;
	p->link=temp;
	
}
   
