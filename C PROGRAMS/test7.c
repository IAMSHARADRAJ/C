#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    float i=2,sum=0,y,x;
    printf("Enter the value of n : ");
    scanf("%d",&n);
        while(i<=n)
        {
            if(n==1)
                break;
            else if(n>1)
                {
                x=1/i;
                y=pow(x,i);
                sum=sum+y;
                i++;
                }
        }
    if(n==1)
    printf("Sum = %d",n);
    else
        sum=sum+1;
    printf("\nSum of series up to %d = %f",n,sum);
    getch();
}
