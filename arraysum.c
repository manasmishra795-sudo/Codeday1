#include<stdio.h>
int main()
{
    int array[100],range,i,k,sum;
    int maxs=0,maxpos=0;
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<3 || range>100)// range check
    {
        printf("Enter a valid value.");
        return 0;
    }

printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<=range-3;i++)// loop to calculate sum
    {
        sum=array[i]+array[i+1]+array[i+2];
        if(sum>maxs)// checking for maximum sum
        {
            maxs=sum;
            maxpos=i;
        }
    }
    printf("The triplet with maximum sum in the array is :\n");
    printf("%d+%d+%d=%d",array[maxpos],array[maxpos+1],array[maxpos+2],maxs);
    return 0;
}
