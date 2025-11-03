#include<stdio.h>
void input1darray(int array[],int range)
{
    int i;
    printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
}
void print1darray(int array[],int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    printf("\n");
}
int main()
{
    int array[100],i,range,temp[100],rotate;
     printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value for range.");
        return 0;
    }
    input1darray(array,range);
    printf("Enter the value to be rotated by:\n");
    scanf("%d",&rotate);
    rotate=rotate%range;
    printf("Array before rotation:\n");
    print1darray(array,range);
    for(i=0;i<rotate;i++)
    {
        temp[i]=array[range-rotate+i];
    }
    for(i=rotate;i<range;i++)
    {
        temp[i]=array[i-rotate];
    }
    printf("Array after rotation:\n");
    print1darray(temp,range);
    return 0;

}