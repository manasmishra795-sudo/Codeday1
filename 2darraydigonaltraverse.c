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
void diagonaltraverse(int matrix[][100], int rows, int column) {
    printf("Diagonal Traversal:\n");
    for (int d = 0; d < rows + column - 1; d++) 
    {
        int rowc = d < column ? 0 : d - column+ 1;// rowc=row coordinate,colc=column coordinate
        int colc= d < column ? d : column - 1;

        int store[100], k = 0;

        int r = rowc, c = colc;
        while (r < rows && c >= 0)
        {
            store[k] = matrix[r][c];
            k++;
            r++;
            c--;
        }

        if (d % 2 == 0) {
            // Reverse for even diagonals
            for (int i = k - 1; i >= 0; i--)
                printf("%d ", store[i]);
        } else {
            for (int i = 0; i < k; i++)
                printf("%d ", store[i]);
        }
    }
    printf("\n");
}
int main()
{
    int matrix[100][100],row,column;
    printf("Enter the rows and columns of the matrix(between 1-10):\n");
    scanf("%d %d",&row,&column);
    if(row<=0|| row>10 || column<=0||column>10)
    {
        printf("Invalid value");
        return 0;
    }
    printf("Enter the elements in the array\n");
    input(matrix,row,column);
    printf("Matrix:\n");
    print(matrix,row,column);
    diagonaltraverse(matrix,row,column);
    return 0;
}