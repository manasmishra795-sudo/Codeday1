#include<stdio.h>
void input(int* p,int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        scanf("%d",p+i);
    }

}
void ouput(int* p,int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        printf("%2d",*(p+i));
    }
    printf("\n");
}

int main()
{
    int array[100],range,i,ceven=0,codd=0;
    int* p=array;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value.");
        return 0;
    }
    printf("Enter the elements in the array:\n");
    input(p,range);
    printf("Array:\n");
    ouput(p,range);
    printf("Reversed array:\n");
    for(i=range-1;i>=0;i--)
    {
        printf("%2d",*(p+i));
    }

    return 0;
}