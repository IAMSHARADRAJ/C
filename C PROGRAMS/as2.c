// PROGRAM FOR PRINTING A MATRIX
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,m,a[5][5];
printf("Enter the numbers of rows : ");
scanf("%d",&n);
printf("Enter the numbers of columns : ");
scanf("%d",&m);
printf("\nEnter elements of matrix A : \n\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
    printf("Enter A%d%d : ",i+1,j+1);
    scanf("%d",&a[i][j]);
    }
}
printf("\nMatrix A is : \n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
getch();
}
