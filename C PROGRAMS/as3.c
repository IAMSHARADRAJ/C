#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[20];
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Numbers in reverse order are : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
getch();
}
