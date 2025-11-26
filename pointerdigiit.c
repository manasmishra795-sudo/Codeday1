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
        printf("%d",*(p+i));
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
    int array[100],range,i,frequency[100],counter=0,k,store=0;
    int* p=array;
    int* f=frequency;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value.");
        return 0;
    }
    printf("Enter the number(single digit at a time):\n");
    input(p,range);
    ouput(p,range);
    for(i=0;i<=9;i++)
    {
        for(k=0;k<range;k++)
        {
            if(*(p+k)==i)
            {
                counter++;
            }
        }
        if(counter!=0)
        {
            *(f+store)=counter;
            store++;
            counter=0;    
        }
    }
    sort(f,store);
    printf("The most repeated digit is %d",*(f+store-1));

    return 0;
}