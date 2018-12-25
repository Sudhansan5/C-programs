#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void dappend();
void display();
void insert();
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root=NULL;
void main()
{   int n;
    printf("How many data u wanna enter: ");
    scanf("%d",&n);
    printf("Enter the data\n");
    while(n--)
        dappend();
    display();
    insert();
    display();
}
void dappend()
{
	struct node* temp;
	 struct node* p;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	   root=temp;
	else
	{   
	    p=root;
		while(p->right!=NULL)
			p=p->right;
		p->right=temp;
		temp->left=p;
	}
}
void insert()
{   int n,i=1;
	struct node* temp=root,*p=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the position where u wanna insert a node");
	scanf("%d",&n);
	printf("Enter the data u wanna insert");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	while(i<n-1)
	{
		p=p->right;
		i++;
	}
    temp->right=p->right;
    p->right->left=temp;
    temp->left=p;
    p->right=temp;
}
void display()
{
	struct node* temp=root;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->right;
	}
	printf("\n");
}
