#include<stdio.h>
void inputrowcol(int* row,int* column)
{
    scanf("%d %d",row,column);
    if(*row<0||*row>100||*column<=0||*column>100)
    {
        printf("Invalid value.");
        return;
    }

}
void twoinput(int(*p)[100],int* row,int* column)
{
    int i,k;
    for(i=0;i<*row;i++)
    {
        for(k=0;k<*column;k++)
        {
            scanf("%d",(*(p+i)+k));
        }
    }
}
void twooutput(int(*p)[100],int* row,int* column)
{
    int i,k;
    for(i=0;i<*row;i++)
    {
        for(k=0;k<*column;k++)
        {
            printf("%4d",*(*(p+i)+k));
        }
        printf("\n");
    }
}
void diagonaltraverse(int(*p)[100], int* rows, int* column)
 {
    printf("Diagonal Traversal:\n");
    for (int d=0;d<*rows+*column-1;d++) 
    {
        int rowc=d <*column?0:d-*column+ 1;// rowc=row coordinate,colc=column coordinate
        int colc=d<*column?d:*column-1;

        int store[100], k=0;
        int* s=store;

        int r=rowc, c=colc;
        while (r<*rows && c>=0)
        {
            *(s+k) = *(*(p+r)+c);
            k++;
            r++;
            c--;
        }

        if (d%2==0)
        {
            // Reverse for even diagonals
            for (int i=k-1;i>=0;i--)
                printf("%d ", *(s+i));
        } 
        else 
        {
            for (int i=0;i<k;i++)
                printf("%d ", *(s+i));
        }
    }
    printf("\n");
}
int main()
{
    int array1[100][100],i,k,row,column,diagoanl[100],counter=0,sum=0;
    int(*p)[100]=array1;
    int *t=diagoanl;
    printf("Enter the rows and column of the matrixes:\n");
    inputrowcol(&row,&column);
    printf("Enter the elements of Matrix:\n");
    twoinput(p,&row,&column);
    printf("Matrix:\n");
    twooutput(p,&row,&column);
    diagonaltraverse(p,&row,&column);
    return 0;
}