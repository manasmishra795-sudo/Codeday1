#include<stdio.h>
int main()
{
    int array[100],num,range,i,counter=0,search[100];
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Enter a valid value for range.");
        return 0;
    }
    printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be searched for:");
    scanf("%d",&num);
    for(i=0;i<range;i++)
    {
        if(array[i]==num)
        {
            search[counter]=i;
            counter++;
        }
    }
    if(counter==0)
    {
        printf("The entered element is not in the array.\n");
    }
    else{
        printf("The entered element has been located at index(es):\n");
        for(i=0;i<counter;i++)
        {
            printf("%d",search[i]);
            printf("\n");
        }
    }
    
    
    
    return 0;
}