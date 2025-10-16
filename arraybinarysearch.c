#include<stdio.h>
int main()
{
    int array[100],i,range,num,start=0,end,mid;
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Enter a valid for the range.");
        return 0;
    }
    end=range-1;
    printf("Enter the elemnts in asscending order:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be located:");
    scanf("%d",&num);
    while(start<=end)
    {
        mid=(start+end)/2;
        if(array[mid]==num)
        {
            printf("Element located at the index:\n%d",mid);
            return 0;
        }
        else if(array[mid]<num)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
        }
    printf("The element is not in the array.");
    return 0;
}
    