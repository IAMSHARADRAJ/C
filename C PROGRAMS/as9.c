#include<stdio.h>
#include<conio.h>
int large(int*,int*);
void main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("LARGEST NUMBER IS : %d",large(&a,&b));
    getch();
}
int large(int *z,int *y)
{
    int *num;
    *num=*z>*y?*z:*y;
    return *num;
}
