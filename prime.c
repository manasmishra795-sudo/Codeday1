#include<stdio.h>
int main ()
{
    int num,i,count=0;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num==0 || num<=0)
    {
        printf("Please enter a positive number.");
        return 0;
    }
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }

    }
 if(num==2)
 {
    printf("The entered number is a Prime Number");
 }
else if(count==1)
{
    printf("The entered number is a Prime Number");
}
else
{
 printf("The entered number is not a Prime Number");
}
    return 0;
}