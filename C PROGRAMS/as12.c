// Program for finding factorial using pointers
#include<stdio.h>
#include<conio.h>
float f(int);
void main()
{
    int a;
    //clrscr();
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Factorial of %d is %f",a,f(a));
    getch();
}
float f(int x)
{
    float sum=1,*p;
    while(x>0)
        {
            sum=sum*x;
            x--;
        }
    p=&sum;
    return *p;
}
