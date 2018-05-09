//BUBBLE SHORT
#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int i,j,n,a[20];
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&a[i]);
    }
     printf("\nArray before sorting are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

   for (i = 0; i < n-1; i++)
       {
                for (j = 0; j < n-i-1; j++)
                {
                    if (a[j] > a[j+1])
                    swap(&a[j], &a[j+1]);
                }
       }

    printf("\nArray after sorting are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
