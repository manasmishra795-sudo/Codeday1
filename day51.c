/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and 
print the index of first and last occurrence.
Print -1 if the target is not present.*/
#include<stdio.h>
void sort(int array[],int range)
{
    int i,k,store=0;
    for(i=0;i<range-1;i++)
    {
        for(k=i+1;k<range;k++)
        {
            if(array[k]<array[i])
            {
                store=array[i];
                array[i]=array[k];
                array[k]=store;
            }
        }
    }
}
#include<stdio.h>
void input1darray(int array[],int range)
{
    int i;
    printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
}
void print1darray(int array[],int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    printf("\n");
}
int main()
{
    int num[100],i,range,store=0,counter=0,target,store2=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value for range.");
        return 0;
    }
    input1darray(num,range);
    sort(num,range);
    printf("Enter the target to be searched for:\n");
    scanf("%d",&target);
    printf("Array:\n");
    print1darray(num,range);
    for(i=0;i<range;i++)
    {
        if(target==num[i])
        {
            store=i;
            counter++;
            break;
        }
    }
    for(i=range-1;i>=0;i--)
    {
        if(target==num[i])
        {
            store2=i;
            counter++;
            break;
        }
    }
    if(store==store2 && counter==2)
    {
        printf("The first and only occurance of %d in the array is at %d index\n",target,store);
    }
    else if(store!=store2 && counter==2)
    {
        printf("The first and last occurance of %d in the array is at %d and %d index(es):\n",target,store,store2);
    }
    else if(counter==0)
    {
        printf("-1");
    }
    
    return 0;
}