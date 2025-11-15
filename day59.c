/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
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
int main()
{
    int array[100],i,k,l,sum=0,range,maxsum=0,maxpos=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range>100||range<=0)
    {
        printf("Invalid value.");
        return 0;
    }
    input1darray(array,range);
    printf("Enter the value of subrray:\n");
    scanf("%d",&k);
    if(k>range || k<0)
    {
        printf("Invalid value.");
        return 0;
    }
    for(i=0;i<=range-k;i++)
    {
        sum=0;
        for(l=0;l<k;l++)
        {
            sum=sum+array[i+l];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            maxpos=i;
        }
    }
    printf("Maximum sum subarray is equal to:\n");
    for(i=maxpos;i<maxpos+k;i++)
    {
        printf("Array[%d]",i);
        if(i<maxpos+k-1)
        printf(" + ");
    }
    printf("=%d\n",maxsum);
    return 0;
}