#include<stdio.h>
int main()
{
    int column,row,i,k;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&row,&column);
    int array1[row][column];
    printf("Enter the elements in rach row for matrix:\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            scanf("%d",&array1[i][k]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            printf("%4d",array1[i][k]);
        }
        printf("\n");
    }
    return 0;
}