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
        printf("%3d",*(p+i));
    }
    printf("\n");
}
void sort(int* p, int range)
{
    int i,k,store=0;
    for(i=0;i<range-1;i++)
    {
        for(k=i+1;k<range;k++)
        {
            if(*(p+k)<*(p+i))
            {
                store=*(p+i);
                *(p+i)=*(p+k);
                *(p+k)=store;
            }
        }
    }
}
int main()
{
    int array[100],range,i,num,check=0;
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
    sort(p,range);
    ouput(p,range);
    printf("The second largest element in the array is:%d\n",*(p+range-2));
    return 0;
}