/*
 * C program to create a linked list and display the elements in the list
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 struct node
    {
        char num;
        struct node *ptr;
    };
    typedef struct node NODE;
    struct node *head;
void main()
{
    
 
    NODE *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
 
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%s", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        //fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
 
    }
    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%c=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
}
void add()
{
	struct node*p,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	p->num="D";
	p->ptr=NULL;
	temp=head;
	while(temp->num!="c")
	temp=temp->ptr;
	p->ptr=temp->ptr;
	temp->ptr=p;
}
