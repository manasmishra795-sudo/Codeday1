#include<stdio.h>
void print(int array[][100],int row,int column)
{
    int i,k;
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            printf(" %2d",array[i][k]);
        }
        printf("\n");
    }
}
void input(int array[][100],int row,int column)
{
    int i,k;
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            scanf(" %2d",&array[i][k]);
        }
    }
}
int main()
{
    int matrix[100][100],i,k,row, column,sum,transpose[100][100];
    printf("Enter the rows and columns of the matrix(between 1-10):\n");
    scanf("%d %d",&row,&column);
    if(row<=0|| row>10 || column<=0||column>10)
    {
        printf("Invalid value");
        return 0;
    }
    printf("Enter the elements in the array\n");
    input(matrix,row,column);
    printf("Matrix A:\n");
    print(matrix,row,column);
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            transpose[k][i]=matrix[i][k];
        }
    }
    printf("Transpose of Matrix:\n");
    print(transpose,column,row);
    return 0;
}