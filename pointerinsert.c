#include<stdio.h>
void input(int* p,int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        scanf("%d",p+i);
    }

}
void output(int* p,int range)
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
int main()
{
    int array[100],range,i,num,insert;
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
    printf("Enter the number to be inserted:\n");
    scanf("%d",&num);
    printf("Array before inerseting:\n");
    output(p,range);
    for(insert=0;insert<range;insert++)
    {
        if(num<*(p+insert))
        {
          break;
        }
    }
    for(i=range;i>insert;i--)
    { 
       *(p+i)=*(p+i-1);
    }
    *(p+insert)=num;
    range++;
    printf("Array after insertion:\n");
    output(p,range);
    return 0;
}