/*Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output.
*/
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
    int array[100],i,k,l,sum=0,range,max=0;
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
        max=0;
        for(l=0;l<k;l++)
        {
            if(array[l+i]>max)
            {
                max=array[l+i];
            }
        }
        printf("%3d",max);
    }

    return 0;
}