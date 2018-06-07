// tan series
#include<math.h>
#include<conio.h>
#include<stdio.h>
long double factorial(int);
void main()
{
    int x,n,f,i;
    float sum=0;
    printf("Enter the value of n and x : ");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
        f=factorial(i);
        sum =sum+(pow(x,i)/f);
    }
    }
    printf("Sum = %f",sum);
    getch();
}
long double factorial(int a)
{
  if(a==0)
    return 1;
  else
    return (a*factorial(a-1));
}
