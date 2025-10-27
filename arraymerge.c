#include<stdio.h>
int main()
{
    int array1[100],array2[100],range1,range2,i;
    printf("Enter range of array 1 and array 2:\n");
    scanf("%d %d",&range1,&range2);
    if((range1<=0 || range1>100)||(range2<=0 || range2>100) )
    {
        printf("Enter a valid value for the ranges");
        return 0;
    }
    printf("Enter the elements in array 1:\n");
    for(i=0;i<range1;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter the elements in array 2:\n");
    for(i=0;i<range2;i++)
    {
        scanf("%d",&array2[i]);
    }
    printf("Elements in Array1:\n");
    for(i=0;i<range1;i++)
    {
        printf("%d",array1[i]);
    }
    printf("\n");
    printf("Elements in Array2:\n");
    for(i=0;i<range2;i++)
    {
        printf("%d",array2[i]);
    }
    printf("\n");
    printf("Merging both arrays:");
    for(i=0;i<range1;i++)
    {
        printf("%d",array1[i]);
    }
    for(i=0;i<range2;i++)
    {
        printf("%d",array2[i]);
    }
    return 0;
}