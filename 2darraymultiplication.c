#include<stdio.h>
int main()
{
    int row1,column1,row2,column2,i,k;
    printf("Enter the rows and columns of Matrix A:\n");
    scanf("%d %d",&row1,&column1);
    printf("Enter the rows and column of Matrix B:\n");
    scanf("%d %d",&row2,&column2);
    int matrixA[row1][column1],matrixB[row2][column2],matrixC[row1][column2];
    if(column1!=row2)// condition check
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }
    printf("Enter the elements in Matrix A:\n");
    for(i=0;i<row1;i++)// loop to input elements
    {
        for(k=0;k<column1;k++)
        {
            scanf("%d",&matrixA[i][k]);
        }
    }
    printf("Enter the elements in Matrix B:\n");
    for(i=0;i<row2;i++)
    {
        for(k=0;k<column2;k++)
        {
            scanf("%d",&matrixB[i][k]);
        }
    }
    for(i=0;i<row1;i++)// removing garbage values from C
    {
        for(k=0;k<column2;k++)
        {
            matrixC[i][k]=0;
        }
    }
    for(i=0;i<row1;i++)// multiplication loop
    {
        for(k=0;k<column2;k++)
        {
            matrixC[i][k]=matrixC[i][k]+matrixA[i][k]*matrixB[i][k];
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<row1;i++)// loop to print values
    {
        for(k=0;k<column1;k++)
        {
         printf("%2d ",matrixA[i][k]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<row2;i++)
    {
        for(k=0;k<column2;k++)
        {
         printf("%2d ",matrixB[i][k]);
        }
        printf("\n");
    }
    printf("Matrix C=A*B:\n");
    for(i=0;i<row1;i++)
    {
        for(k=0;k<column2;k++)
        {
         printf("%2d ",matrixC[i][k]);
        }
        printf("\n");
    }
    
    return 0;
}