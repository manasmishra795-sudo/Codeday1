/*
Write a Program to take an array of integers as input, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. 
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
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
int pivotindex(int array[],int range,int* lsum,int* rsum)
{
  int i,tsum=0;
  *lsum=0;
  for(i=0;i<range;i++)
  { 
    tsum=tsum+array[i];
  }
  for(i=0;i<range;i++)
  {
    *rsum=tsum-*lsum-array[i];
    if(*lsum==*rsum)
    {
        return i;
    }
    *lsum=*lsum+array[i];
  }
  return -1;
}
int main()
{
     int array[100],i,range,pivot,lsum=0,rsum=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value for range.");
        return 0;
    }
    input1darray(array,range);
    printf("Array:\n");
    print1darray(array,range);
    pivot=pivotindex(array,range,&lsum,&rsum);
    printf("%d\n",lsum);
    printf("%d\n",rsum);
    if(pivot!=-1)
    {
        printf("The pivot index in the array is:%d\n",pivot);
    }
    else 
    {
        printf("There is no pivot index in the array.\n");
    }
    return 0;
}