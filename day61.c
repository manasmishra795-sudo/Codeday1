/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right.
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/
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
    int array[100],i,k,l,sum=0,range,negative=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range>100||range<=0)
    {
        printf("Invalid value.");
        return 0;
    }
    input1darray(array,range);
    printf("Enter the value of subrray:\n");
    scanf("%d",&k);
    if(k>range || k<0)
    {
        printf("Invalid value.");
        return 0;
    }
    for(i=0;i<=range-k;i++)
    {
        int flag=0;
        for(l=0;l<k;l++)
        {
            if(array[l+i]<0)
            {
                negative=array[l+i];
                printf("%3d",negative);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf(" 0 ");
        }
    }    
    return 0;
}
