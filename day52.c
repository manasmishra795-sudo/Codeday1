/*Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
This element is called the ceil of x. If such an element does not exist, print -1.
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/
#include<stdio.h>
void sort(int array[],int range)
{
    int i,k,store=0;
    for(i=0;i<range-1;i++)
    {
        for(k=i+1;k<range;k++)
        {
            if(array[k]<array[i])
            {
                store=array[i];
                array[i]=array[k];
                array[k]=store;
            }
        }
    }
}
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
    int array[100],i,range,store=0,counter=0,x;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value for range.");
        return 0;
    }
    input1darray(array,range);
    sort(array,range);
    printf("Enter the value for x:\n");
    scanf("%d",&x);
    for(i=0;i<range;i++)
    {
        if(array[i]>=x)
        {
            store=i;
            counter++;
            break;
        }
    }
    printf("Array:\n");
    print1darray(array,range);
    if(counter==1)
    {
        printf("Smallest element in the array that is greater than %d is %d found at index:%d",x,array[store],store);
    }
    else
    {
        printf("-1");
    }
    
    return 0;
}