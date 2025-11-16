/*Write a program to take an integer array arr as input.
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.*/
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
    int array[100],i,k,range;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range>100||range<=0)
    {
        printf("Invalid value.");
        return 0;
    }
    input1darray(array,range);
    int current=array[0];
    int global=array[0];
    for(i=0;i<range;i++)
    {
        if(current+array[i]>array[i])
        {
           current=current+array[i];
        }
        else
        {
            current=array[i];
        }
        if(current>global)
        {
            global=current;
        }
    }
    printf("Maximum contiguous subarray sum=%d\n",global);
    return 0;
}