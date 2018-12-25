#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *f1,*f2;
	int ch;
	f1=fopen("h:/file1.txt","r");
	f2=fopen("h:/file2.txt","w");
	while((ch=fgetc(f1))!=EOF)
	     fputc(ch,f2);
	     fputs("That was fun!!\nWasn't it??",f2);
	printf("Copied");
}
