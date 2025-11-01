#include<stdio.h>
int main ()
{
    int array[100],range,i,max1,max2;
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<=0||range>100)
    {
        printf("Enter a valid value.");
        return 0;
    }
    printf("Enter the elemnts in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array:\n");
    for(i=0;i<range;i++)
    {
        printf("%d",&array[i]);
    }
    return 0;
}

    