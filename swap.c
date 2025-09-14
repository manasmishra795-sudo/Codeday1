#include<stdio.h>
int main()
{
    int number,digit[20],counter=0,newnum[20],store,i,counter2=0;
    printf("Enter the number :");
    scanf("%d",&number);
    store=number;
    while(number!=0)
    {
        digit[counter]=number%10;
        counter++;
        number=number/10;
    }
    number=store;
    for(i=counter-1;i>=0;i--)
    {
    newnum[counter2]=digit[i];
    counter2++;
    }
    store=newnum[0];
    newnum[0]=newnum[counter2-1];
    newnum[counter2-1]=store;
    printf("The number after swapping the digits is:");
    for(i=0;i<counter2;i++)
    {
    printf("%d",newnum[i]);
    }
    return 0;
}