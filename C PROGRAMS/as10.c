#include<stdio.h>
#include<conio.h>
void main()
{
    int n,*p;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    p=&n;
    printf("Address of p before incrementing is %u",p);
    p++;
    printf("\nAddress of p after incrementing is %u",p);
    getch();
}
