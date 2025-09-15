#include<stdio.h>
int main()
{
    int n,i,k;
    float sum=0.0,numerator,denominator;
    printf("Enter the range of series:");
    scanf("%d",&n);
    if(n<=0)
    {
    printf("Enter a valid value.");
    return 0;
    }
    for(i=1,k=1;i<=n,k<=n;i++,k++)
    {
        numerator=2*i;
        denominator=2*i+(2*k+1);
        sum=sum+(numerator/denominator);
    }
    printf("The sum of series upto %d terms is %.2f",n,sum);
    return 0;
}