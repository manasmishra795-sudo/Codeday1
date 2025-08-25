#include<stdio.h>
#include<math.h>

    int main()
    {
double principle, time, rate , sinterest, amount, cinterest;
int n ;
    
    printf("Enter the Principle :");
    scanf("%lf", &principle);
    printf("Enter the rate");
    scanf("%lf", &rate);
    printf("Enter the time");
    scanf("%lf", &time);
    printf("Enter the number of times to be compounded");
    scanf("%d", &n);
    double fraction = rate/100;
  
  amount=principle*pow(1+fraction/n , n*time);
  cinterest=amount-principle;
 sinterest=(principle*rate*time)/100;
 printf("The compound interest is %lf", cinterest);
 printf("The simple interest is %lf", sinterest);
 return 0;


    
}