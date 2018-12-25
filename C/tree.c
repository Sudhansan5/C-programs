#include<stdio.h>
#include<stdlib.h>
void insert(int);
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root=NULL;
void main()
{
	
}
void insert(int d)
{
	struct node* temp,*curr,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
		root=temp;
	else
	{
		curr=root;
		while(curr)
		{
			p=curr;
			if(temp->data>=p->data)
			   curr=curr->right;
			else
			   curr=curr->left;
		}
		if(temp->data>=p->data)
		  p->right=temp;
		else
		  p->left=temp;
	}
}
