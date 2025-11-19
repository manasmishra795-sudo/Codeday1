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
        printf("%d",*(p+i));
    }
}

int main()
{
    int array[100],range,i;
    int* p=array;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<range;i++)
    {
        printf("%2d",*(p+i));
    }
    return 0;
}
