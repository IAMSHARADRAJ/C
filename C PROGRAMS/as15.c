// Program for  HCF USING RECURSION
#include<stdio.h>
#include<conio.h>
int max;
int hcf(int,int);
void main()
{
int a,b;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
if(a>b)
    max=a;
else
    max=b;
printf("HCF of %d and %d is %d",a,b,hcf(a,b));
getch();
}
int hcf(int x,int y)
{
    if(x%max==0&&y%max==0) {
    goto out; }
    else
    {
        max--;
        hcf(x,y);  }
out:
return max; }
