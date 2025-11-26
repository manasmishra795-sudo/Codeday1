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
void sort(int* p, int range)
{
    int i,k,store=0;
    for(i=0;i<range;i++)
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
int binary(int* p,int range ,int num)
{
    int start=0,end=range-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(*(p+mid)==num)
        {
            return mid;
        }
        else if(*(p+mid)<num)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
        }
        return -1;
}

int main()
{
    int array[100],range,i,num,pos;
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
    printf("Enter the number to be located:\n");
    scanf("%d",&num);
    pos=binary(p,range,num);
    printf("Array:\n");
    ouput(p,range);
    if(pos==-1)
    {
        printf("The number %d is not in the array.\n",num);
    }
    else
    {
        printf("The number:%d is located at the position %d in the array.",num,pos);
    }
    return 0;
}