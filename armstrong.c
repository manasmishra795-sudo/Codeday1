#include<stdio.h>
#include<math.h>
int main ()
{
    int num,digit[32],sum=0,store,i=0,k;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num==0 || num<=0)
    {
        printf("Please enter a positive number only.");
        return 0;
    }
    store=num;
    
    while(num!=0)
    {
      digit[i]=num%10;
      num=num/10;
      i++;  
    }
    for(k=0;k<i;k++)
    {
        sum=sum+pow(digit[k],i);
    }
    num=store;
    if(num==sum)
    {
        printf("The entered numbere is an ARMSTRONG NUMBER.");
    }
    else
    {
        printf("The enetered number is not an ARMSTRONG NUMBER.");
    }
    return 0;
}