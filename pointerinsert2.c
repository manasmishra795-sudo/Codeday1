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
void insert(int* p,int* range,int num,int position)
{
    int i;
    if(position<0|| position>*range)
    {
        printf("Invalid input.Enter betwen 0-%d",range);
        return ;
    }
    else{
    for(i=*range;i>position;i--)
    {
        *(p+i)=*(p+i-1);
    }
    *(p+position)=num;
    (*range)++;
}
}

int main()
{
    int array[100],range,i,num,position;
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
    printf("Enter the number to be inserted:\n");
    scanf("%d",&num);
    printf("Enter the position at which it should be inserted.\n");
    scanf("%d",&position);
    printf("Array before insertion:\n");
    output(p,range);
    insert(p,&range,num,position);
    /*
    if(position<0|| position>range)
    {
        printf("Invalid input.Enter betwen 0-%d",range);
        return 0;
    }
    for(i=range;i>position;i--)
    {
        *(p+i)=*(p+i-1);
    }
    *(p+position)=num;
    range++;
    */
    printf("Array after insertion:\n");
    output(p,range);
    return 0;
}