//WRITE A PROGRAM TO FIND THE ARMSTRONG NUMBERS IN A GIVEN RANGE
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,sum,a,b,rem,num;
    printf("Enter the starting of range : ");
    scanf("%d",&a);
    printf("Enter the ending of range : ");
    scanf("%d",&b);
    printf("RANGE : %d to %d\nARMSTRONG NUMBERS : ",a,b);
    for(i=a;i<=b;i++)
    {
        sum=0;
        num=i;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
        if(sum==i)
        printf("%d ",i);
    }

    getch();
}
