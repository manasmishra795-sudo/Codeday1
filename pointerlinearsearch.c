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
int search(int* p,int range,int num)
{
  int i,check=0;
  for(i=0;i<range;i++)
    {
        if(*(p+i)==num)
        {
            return i;
        }
    }
    return -1;
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
    printf("Enter the number you want to search:\n");
    scanf("%d",&num);
    for(i=0;i<range;i++)
    {
        if(*(p+i)==num)
        {
            check++;
            break;
        }
    }
    ouput(p,range);
    if(check!=0)
    {
        printf("The element:%d is found at the position %d in the array.",num,i);
    }
    else
    {
        printf("The element:%d is not in the array.",num);
    }
    return 0;
}