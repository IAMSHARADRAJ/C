// Program for adding elements of same index of two arrays and assiging it to third array 
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
    int i,n,*x,*y,*z;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    x=(int*)malloc(n*sizeof(int));
    if(x == NULL)
    {
        printf("Error! memory not allocated for x");
        exit(0);
    }
    y=(int*)malloc(n*sizeof(int));
    if(y == NULL)
    {
        printf("Error! memory not allocated for y");
        exit(0);
    }
    z=(int*)malloc(n*sizeof(int));
    if(z == NULL)
    {
        printf("Error! memory not allocated for z");
        exit(0);
    }
    printf("For 1st array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",(x+i));
    }
    printf("For 2nd array \n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",y+i);
    }
    printf("Elements of 3rd array are : ");
    for(i=0;i<n;i++)
    {
        *(z+i)=*(x+i)+*(y+i);
        printf("%d ",*(z+i));
    }
    getch();
}
