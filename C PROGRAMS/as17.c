// Program for  converting lower case string to upper case 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,sum=0;
    printf("Enter the string in lower case: ");
    gets(s);
    strupr(s);
    printf("String in UPPER case is : %s ",s);
    getch();
}
