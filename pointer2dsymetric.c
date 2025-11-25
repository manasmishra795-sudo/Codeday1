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
int symetric(int(*p)[100],int(*t)[100],int* row,int* column)
{
    int i,k;
    if(*row!=*column)
    {
        return -1;
    }
    else{
    for(i=0;i<*row;i++)
    {
        for(k=0;k<*column;k++)
        {
            *(*(t+k)+i)=*(*(p+i)+k);
        }
    }
     for(i=0;i<*row;i++)
    {
        for(k=0;k<*column;k++)
        {
            if(*(*(p+i)+k)!=*(*(t+k)+i))
            {
                return -1;
            }
        }
    }
}
    return 1;
    
}
int main()
{
    int array1[100][100],i,k,row,column,array2[100][100],check;
    int(*p)[100]=array1;
    int(*t)[100]=array2;
    printf("Enter the rows and column of the matrixes:\n");
    inputrowcol(&row,&column);
    printf("Enter the elements in the matrix:\n");
    twoinput(p,&row,&column);
    printf("Matrix:\n");
    twooutput(p,&row,&column);
    check=symetric(p,t,&row,&column);
    if(check==-1)
    {
        printf("Non-Symetric Matrix.\n");
    }
    else if(check==1)
    {
        printf("Symetric Matrix.\n");
    }
    return 0;
}