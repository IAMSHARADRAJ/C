#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);
    strcpy(s1,s2);
    printf("\nString second copied into first string\n");
    printf("\nString second is now : %s",s2);
    printf("\nLength of second string is %d",strlen(s2));
    getch();
}
