#include<stdio.h>
int main ()
{
    int number,digit[30],counter=0,i,factorial=1,sum=0,store,counter2=0,k;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number<=0)
    {
        printf("Please enter a valid value.");
        return 0;
    }
    store=number;
    while(store!=0)// digit extraction loop
    {
        digit[counter]=store%10;
        counter++;
        store=store/10;
    }
    for(i=0;i<counter;i++) // accessing digits stored in array
    {
       for(k=1;k<=digit[i];k++) // factorial loop
       {
        factorial=k*factorial;
       }
       sum=sum+factorial;// adding the factorial
       factorial=1; // resetting value of factorial for next iteration
    }
    
    if(number==sum)
    {
        printf("The entered number %d is is a Strong Number",number);
    }
    else
    {
        printf("The entered number :%d is is not a Strong Number.",number);
    }
    return 0;
}