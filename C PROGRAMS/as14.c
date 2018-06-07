// Program for  realloc function
#include<malloc.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 char *x;
 x=(char*)malloc(30*sizeof(char));
 strcpy(x,"HELLO");
 printf("The string is : %s",x);
 x=(char*)realloc(x,50);
 strcpy(x,"I am new");
 printf("\n\nNew string after realloc is : %s",x);
 free(x);
 getch();
}
