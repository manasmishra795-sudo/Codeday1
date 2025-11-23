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
        printf("%2d",*(p+i));
    }
    printf("\n");
}
void rota(int* p,int* s,int range,int rotate)
{
    int i;
    rotate=rotate%range;
    for(i=0;i<rotate;i++)
    {
        *(s+i)=*(p+range-rotate+i);
    }
    for(i=rotate;i<range;i++)
    {
        *(s+i)=*(p+i-rotate);
    }
}

int main()
{
    int array[100],range,i,rotate,store[100];
    int* p=array;
    int *s=store;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value.");
        return 0;
    }
    printf("Enter the elements in the array:\n");
    input(p,range);
    printf("Enter the value to be rotated by:\n");
    scanf("%d",&rotate);
    rotate=rotate%range;
    printf("Array before rotation:\n");
    output(p,range);
    /*
    for(i=0;i<rotate;i++)
    {
        *(s+i)=*(p+range-rotate+i);
    }
    for(i=rotate;i<range;i++)
    {
        *(s+i)=*(p+i-rotate);
    }
        */
    rota(p,s,range,rotate);
    printf("Array after rotation:\n");
    output(s,range);
    return 0;
}