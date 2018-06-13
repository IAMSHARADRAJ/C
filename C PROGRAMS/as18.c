// Program for  revesing a string
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<malloc.h>
void main()
{
    char *s,*s2;
    int n,i,j;
    s=(char*)malloc(1*sizeof(char));
    s2=(char*)malloc(1*sizeof(char));
    printf("Enter the string : ");
    gets(s);
    printf("\nSize of %s is %d\n",s,strlen(s));
    for(i=strlen(s)-1,j=0;i>=0;i--,j++)
    {
       s2[j]=s[i];
    }
    printf("\nString in reverse is : ");
    for(i=0;i<strlen(s);i++)
    {
    printf("%c",s2[i]);
    }
    getch();
}
