/*Write a program to take an array arr[] of integers as input, 
the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
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
    int array[100],i,k,range;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range>100||range<=0)
    {
        printf("Invalid value.");
        return 0;
    }
    int array2[2*range];
    input1darray(array,range);
    for(i=0;i<range;i++)
    {
        array2[i]=array[i];
        array2[i+range]=array[i];
    }
    for(i=0;i<range;i++)
    {
        int flag=0;
        for(k=i+1;k<2*range;k++)
        {
            if(array2[k]>array[i])
            {
            printf("%2d",array2[k]);
            flag=1;
            break;
            }
        }
        if(!flag)
            {
                printf("-1");
            }
    }
return 0;
}