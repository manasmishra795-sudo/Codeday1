#include<stdio.h>
int main ()
{
    int num,store,revnum=0,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    store=num;
    while(num!=0)
    {
        digit=num%10;
        revnum=revnum*10+digit;
        num=num/10;
    }
    num=store;
    if(revnum==num)
    {
        printf("The entered number is a Pallindrome.");
    }
    else{
        printf("The entered number is not a Pallindrome.");
    }

    return 0;
}