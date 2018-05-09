#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    //clrscr();
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping were %d and %d.\n",a,b);
    swap(&a,&b);
    printf("Numbers after swapping are %d and %d.",a,b);
    getch();
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
