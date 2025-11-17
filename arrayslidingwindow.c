#include<stdio.h>
void input1darray(int array[],int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
}
void print1darray(int array[],int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    printf("\n");
}
int subarray(int array1[100],int array2[100],int range1,int range2)
{
    int i,k,flag;
    if(range1<range2)
    {
        return -1;
    }
    else
    {
    for(i=0;i<=range1-range2;i++)
      {
        flag=0;
        for(k=0;k<range2;k++)
        {
            if(array1[i+k]!=array2[k])
            {
            flag=1;
            break;
            }
        }
        if(!flag)
        {
            return 1;
        }
      }
    }
    return -1;
}
int main()
{
    int A[100],B[100],r1,r2,check=0;
    printf("Enter the range of both arrays:\n");
    scanf("%d %d",&r1,&r2);
    if(r1>100||r1<=0||r2>100||r2<0)
    {
        printf("Invalid value.");
        return 0;
    }
    printf("Enter the elements in array 1:\n");
    input1darray(A,r1);
    printf("Enter the elements in array 2:\n");
    input1darray(B,r2);
    print1darray(A,r1);
    print1darray(B,r2);
    check=subarray(A,B,r1,r2);
    if(check==-1)
    {
        printf("Array 2 is not a Subarray of Array1.\n");
    }
    else if(check==1)
    {
        printf("Array 2 is a subarray of Array 1.\n");
    }
    return 0;
}