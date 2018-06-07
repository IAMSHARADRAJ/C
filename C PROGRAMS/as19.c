// Program for finding a character in a give string
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<malloc.h>
void main()
{
    char *s,c;
    int i,sum=0;
    s=(char*)malloc(1*sizeof(char));
    printf("Enter the string : ");
    gets(s);
    fflush(stdin);
    printf("Enter the character : ");
    scanf("%c",&c);
    for(i=0;i<strlen(s);i++)
    {
    if(c==s[i])
    {
    sum++;
    printf("\nFound same Character at %d place",i+1);
    }
    }
    printf("\nThe character : %c REPEATED %d time.",c,sum);
 getch();
}
