#include<stdio.h>
int main()
{
    int array[100],i,range,sum=0,counter=0;
    printf("Enter the range of array:");
    scanf("%d",&range);
    if(range<0 || range>100)
    {
        printf("Please enter a valid value.");
        return 0;
    }
    printf("Enter the values in array\n");
    for(i=0;i<range;i++)
    {
        
      scanf("%d",&array[i]);
      
    }
    
    for(i=0;i<range;i++)
    {
        sum=sum+array[i];
    }
    
    printf("The sum of values in array is:%d",sum);
    
    return 0;
}