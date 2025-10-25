#include<stdio.h>
int main()
{
    int array[100],countodd=0,counteven=0,i,range;
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
        if(array[i]%2==0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("Total amount of odd elemts: %d\nTotal amount of even elemts: %d", countodd,counteven);

    return 0;
}