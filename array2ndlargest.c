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
    max1=array[0];
    max2=array[0];
    for(i=0;i<range;i++)
    {
        if(array[i]>max1)
        {
            max1=array[i];
        }
    }
    for(i=0;i<range;i++)
    {
        if(array[i]>max2 && array[i]<max1)
        {
            max2=array[i];
        }
        
    }
    printf("The second largedt element in the array is:%d",max2);


    return 0;
}