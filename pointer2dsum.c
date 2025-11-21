#include<stdio.h>
void inputrowcol(int* row,int* column)
{
    printf("Enter the rows and column of the matrix:\n");
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
    int array[100][100],i,k,row,column,sum=0;
    int(*p)[100]=array;
    inputrowcol(&row,&column);
    printf("Enter the elemnts in the matrix:\n");
    twoinput(p,&row,&column);
    printf("Matix:\n");
    twooutput(p,&row,&column);
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            sum=sum+*(*(p+i)+k);
        }
    }
    printf("The sum of elements in the matrix is %d",sum);
    return 0;
}

