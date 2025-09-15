#include<stdio.h>
int main ()
{
    int n,i;
    float sum=1,numerator,denominator;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Please enter a valid value.");
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        numerator=2*i-1;
        denominator=2*i;
        sum= sum+numerator/denominator;
    }
    
     printf("The sum of series upto %d terms is %.2f",n,sum);
    return 0;
}