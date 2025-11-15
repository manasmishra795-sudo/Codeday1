/*Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
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
    int array[100],i,k,range,product[100],counter=0,p=1;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range>100||range<=0)
    {
        printf("Invalid value.");
        return 0;
    }
    input1darray(array,range);
    for(i=0;i<range;i++)
    {
        for(k=0;k<range;k++)
     {
        if(array[i]!=array[k])
        {
            p=p*array[k];
        }
     }
        product[counter]=p;
        counter++;
        p=1;
    }
    printf("Array:\n");
    print1darray(array,range);
    printf("Product of the array:\n");
    print1darray(product,counter);
    return 0;
}
