#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,largest,a[20];
printf("Enter the value of n : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d element : ",i+1);
scanf("%d",&a[i]);
}
largest=a[0];
    for(i=1;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
printf("Largest element is %d ",largest);
getch();
}
