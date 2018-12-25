// Write a program to store and print the roll no., name , age and marks of a student using structures
#include<stdio.h>
struct data
{
	int roll;
	char name;
	int age;
	int marks;
}b1;
void display(struct data*);
int main()
{
	printf("Enter roll,name,age and marks");
	scanf("%d %c %d %d",&b1.roll,&b1.name,&b1.age,&b1.marks);
	display(&b1);
	return 0;
}
void display(struct data *e)
{
	printf("%d %c %d %d",e->roll,e->name,e->age,e->marks);
}
