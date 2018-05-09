#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20];
    int i,sum=0;
    printf("Enter the string : ");
    gets(s);
    for(i=0;i<20;i++)
    {
        if(s[i]=='a' || s[i]=='A' || s[i]=='i' || s[i]=='i' || s[i]=='E' || s[i]=='e' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
            sum++;
    }
    printf("Number of vowels in %s are %d",s,sum);
    getch();
}
