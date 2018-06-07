// Program for finding the prime numbers in a given range
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,sum,a,b;
    printf("Enter the starting of range : ");
    scanf("%d",&a);
    printf("Enter the ending of range : ");
    scanf("%d",&b);
    printf("RANGE : %d to %d\nPRIME NUMBERS : ",a,b);
    for(i=a;i<=b;i++)
    {
        sum=0;
        for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
        sum++;
        break;
        }
    }
        if(sum==0&&i!=1)
        printf("%d ",i);
    }

    getch();
}
