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
    int array1[100][100],i,k,row,column,diagoanl[100],counter=0,counter2=0;
    int(*p)[100]=array1;
    int *t=diagoanl;
    printf("Enter the rows and column of the matrixes:\n");
    inputrowcol(&row,&column);
    printf("Enter the elements of Matrix:\n");
    twoinput(p,&row,&column);
    printf("Matrix:\n");
    twooutput(p,&row,&column);
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            if(i==k)
            {
                *(t+counter)=*(*(p+i)+k);
                counter++;
            }
        }
    }
    for(i=0;i<counter-1;i++)
    {
        if(*(t+i)==*(t+i+1))
        {
            counter2++;
        }
    }
    if(counter2==0)
    {
        printf("The diagonals are distinct.");
    }
    else
    {
        printf("Tge diagonals are not disntict.");
    }
    return 0;
}