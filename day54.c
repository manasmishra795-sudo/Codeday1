/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Print the pivot integer x. If no such integer exists, print -1.
Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
#include<stdio.h>
void input1darray(int array[],int range)
{
    int i;
    printf("Enter the elements in the array:\n");
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
int piovtinteger(int num,int* lsum,int* rsum)
{
    int i,tsum=0;
    *lsum=0;
    for(i=1;i<=num;i++)
    {
        tsum=tsum+i;
    }
    for(i=1;i<num;i++)
    {
        *lsum=*lsum+i;
        *rsum=tsum-*lsum+i;
        if(*rsum==*lsum)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int num,pivot,lsum,rsum;
    printf("Enter the number for which u want to check pivot integer:\n");
    scanf("%d",&num);
    pivot=piovtinteger(num,&lsum,&rsum);
    printf("Left side sum:%d\n",lsum);
    printf("Right side sum:%d\n",rsum);
    if(pivot!=-1)
    {
        printf("The pivot integer for %d is %d\n",num,pivot);
    }
    else
    {
        printf("No pivot integer.\n-1\n");
    }
    return 0;

}