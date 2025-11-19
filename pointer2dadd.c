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
int main()
{
    int array1[100][100],i,k,row,column,array2[100][100],sum[100][100];
    int(*p)[100]=array1;
    int(*t)[100]=array2;
    int(*s)[100]=sum;
    printf("Enter the rows and column of the matrixes:\n");
    inputrowcol(&row,&column);
    printf("Enter the elements of matrix A:\n");
    twoinput(p,&row,&column);
    printf("Enter the elemnts of matrix B:\n");
    twoinput(t,&row,&column);
    printf("Matrix A:\n");
    twooutput(p,&row,&column);
    printf("Matrix B:\n");
    twooutput(t,&row,&column);
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            *(*(s+i)+k)=*(*(p+i)+k)+*(*(t+i)+k);
        }
    }
    printf("Sum of both the matrices is:\n");
    twooutput(s,&row,&column);

    return 0;
}