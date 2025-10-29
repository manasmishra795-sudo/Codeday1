#include<stdio.h>
int main()
{
    int array[100],countn=0,countp=0,countzero=0,i,range;
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Please enter a valid value.");
        return 0;
    }
    printf("Enter the elements in the array\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<range;i++)
    {
        if(array[i]>0)
        {
            countp++;
        }
        else if(array[i]<0)
        {
            countn++;
        }
        else
        {
            countzero++;
        }
    }
        printf("Total positive elemts: %d\nTotal negative elemts: %d\nTotal zero elemts: %d",countp,countn,countzero);
    return 0;
}
    