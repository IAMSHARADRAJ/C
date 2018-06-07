// Program for finding the perfect numbers in a given range
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a,b,p,sum=0;
    printf("Enter the starting of range : ");
    scanf("%d",&a);
    printf("Enter the ending : ");
    scanf("%d",&b);
    printf("\n\nRANGE : %d to %d\nPERFECT NUMBERS : ",a,b);
    for(i=a; i<=b;i++)
    {
    p=1;
    while(p<=(i/2))
    {
    if(i%p==0)
    sum=sum+p;
    p++;
    }
    if(sum==i)
    printf("%d\t",i);
    sum=0;
    }
    getch();
}
