#include<stdio.h>
int main()
{
    int num,digit[20]={0},counter=0,store,i,product=1;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Please enter a psoitive value only.");
        return 0;
    }
    store=num;
    while(num!=0)
    {
     digit[counter]=num%10;
     counter++;
     num=num/10;
    }
    num=store;
    if(counter%2!=0)
    {
        for(i=0;2*i<counter;i++)
        {
            product=product*digit[2*i];
        }
    }
    else{

    
    for(i=0;2*i+1<counter;i++)
    {
        product=product*digit[2*i+1];

    }
}
    printf("The product of odd digits of %d is :%d ", num,product);
    return 0;

}