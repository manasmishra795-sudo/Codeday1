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
int sum(int* p, int range)
{
    int i=0,sum=0;
    for(i=0;i<range;i++)
    {
        sum=sum+*(p+i);
    }
    return sum;
}

int main()
{
    int array[100],range,i,sum=0;
    int* p=array;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0|| range>100)
    {
        printf("Invalid value.");
    }
    printf("Enter the elements in the array:\n");
    input(p,range);
    for(i=0;i<range;i++)
    {
        sum=sum+*(p+i);
    }
    printf("The sum of elements in the array is:%d\n",sum);

    return 0;
}