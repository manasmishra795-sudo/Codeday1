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
int main()
{
    int i,k,range,temp,index=0,num,digit,freq[10]={0},maxfreq=0;
    printf("Enter the integer:\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        freq[digit]++;
        temp=temp/10;
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            index=i;
        }
    }
    printf("The maximum repeated digit is %d and it has been repeated %d times:\n",index,maxfreq);
    return 0;
}
