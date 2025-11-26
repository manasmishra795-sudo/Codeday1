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
void delete(int* p,int* range,int pos)
{
    int i;
    if (pos<0||pos>*range)
    {
        printf("Deletion not possible.\n");
        return;
    }
    else
    {
        for(i=pos;i<*range-1;i++)
        *(p+i) = *(p+i+1);
    }
    (*range)--;
}

int main()
{
    int array[100],range,i,pos;
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
    printf("Enter the position of at which element should be deleted.\n");
    scanf("%d",&pos);
    printf("Array before deletion:\n");
    output(p,range);
   /* if (pos<0||pos>range)
    {
        printf("Deletion not possible.\n");
        return 0;
    }
    else
    {
        for(i=pos;i<range-1;i++)
        *(p+i) = *(p+i+1);
    }
    range--;
    */
    delete(p,&range,pos);
    printf("Array after deletion:\n");
    output(p,range);

    return 0;
}