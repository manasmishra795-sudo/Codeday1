/*Write a program to take an integer array nums of size n, and print the majority element. 
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/
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
int major(int array[],int *f,int range,int* counter)
{
    int i,k,freq[100]={0};
    for(i=0;i<range;i++)
    {
        freq[array[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(freq[i]!=0 && freq[i]>*f)
        {
            *f=freq[i];
            *counter=i;
        }
    }
    if(*f>(range/2))
    {
        return 1;
    }
    return -1;
}
int main()
{
    int array[100],range,counter=0,frequency=0,majority=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range>100||range<=0)
    {
        printf("Invalid value.");
        return 0;
    }
    input1darray(array,range);
    printf("Elements in the array:\n");
    print1darray(array,range);
    majority=major(array,&frequency,range,&counter);
    if(majority==1)
    {
        printf("The majority element in the array is %d and it has been repeated %d times",counter,frequency);
    }
    else if(majority==-1)
    printf("%d",majority);
    return 0;
}