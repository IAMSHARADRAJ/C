// Program for finding number of vowels in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,sum=0;
    printf("Enter the string : ");
    gets(s);
    for(i=0;i<sizeof(s);i++)
    {
        if(s[i]=='a' || s[i]=='A' || s[i]=='i' || s[i]=='i' || s[i]=='E' || s[i]=='e' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
        sum++;
    }
    printf("Number of vowels in string are %d",sum);
    getch();
}
