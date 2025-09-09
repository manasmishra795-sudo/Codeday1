#include<stdio.h>
int main()
{
    int num,digit,sum=0,store;
    printf("Enter the number:");
    scanf("%d", &num);
    if(num<=0)
    {
        printf("Please enter a positive value only.");
        return 0;
    }
    store=num;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    num=store;
    printf("The sum of digits of %d is: %d",num,sum);
  return 0;
}