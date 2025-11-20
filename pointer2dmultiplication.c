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
    int array1[100][100],i,k,row1,column1,row2,column2,array2[100][100],array3[100][100];
    int(*a)[100]=array1;
    int(*b)[100]=array2;
    int(*p)[100]=array3;
    printf("Enter the rows and columns of the Matrix A:\n");
    inputrowcol(&row1,&column1);
    printf("Enter the rows and columns of Matrix B:\n");
    inputrowcol(&row2,&column2);
    printf("Enter the elements of Matrix A:\n");
    twoinput(a,&row1,&column1);
    printf("Enter the elements of Matrix B:\n");
    twoinput(b,&row2,&column2);
    if(column1!=row2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    for(i=0;i<row1;i++)
    {
        for(k=0;k<column2;k++)
        {
            *(*(p+i)+k)=0;
        }
    }
    for(i=0;i<row1;i++)
    {
        for(k=0;k<column2;k++)
        {
          *(*(p+i)+k)=*(*(p+i)+k)+(*(*(a+i)+k) * *(*(b+i)+k));   
        }
    }
    printf("Matrix A:\n");
    twooutput(a,&row1,&column1);
    printf("Matrix B:\n");
    twooutput(b,&row2,&column2);
    printf("Matrix A * Matrix B is:\n");
    twooutput(p,&row1,&column2);
    return 0;
}
