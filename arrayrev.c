#include<stdio.h>
int main()
{
    int array[100],i,range;
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Enter a valid value.");
        return 0;
    }
    printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(i=0;i<range;i++)
    {
        printf("%d", array[i]);
    }
    printf("Reversing the order of elements:");
    for(i=range-1;i>=0;i--)
    {
        printf("%d",array[i]);
    }

    return 0;
}