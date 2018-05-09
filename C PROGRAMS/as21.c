#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<malloc.h>
void main()
{
    char *s;
    int i=0,e=1,w=1;
    s=(char*)malloc(1*sizeof(char));
    printf("Enter the string : ");
    gets(s);
    while(i<=strlen(s))
    {
        if(s[i]=='.')
        {
            e++;
        }
        else if(s[i]==' ')
        {
            w++;
        }
        i++;
    }
    printf("\nNo. of Lines = %d",e);
    printf("\nNo. of Words = %d",w);
    printf("\nNo. of Characters = %d",strlen(s));
    getch();
}
