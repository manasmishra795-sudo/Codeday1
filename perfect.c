#include<stdio.h>
int main ()
{
    int number,divisor[20],i,sum=0,counter=0;
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
        divisor[counter]=i;
        sum=sum+divisor[counter];
        counter++;
        }
    }   
    printf("The divisors of %d are:\n",number);
    for(i=0;i<counter;i++)
    {
        printf("%d\n",divisor[i]);
    }

if(number==sum)
{
    printf("The number is perfect number.");

}
else
{
    printf("The number is not a perfect number.");
}

    return 0;
}