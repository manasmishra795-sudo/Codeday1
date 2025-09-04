#include<stdio.h>
int main ()
{
    int num,revnum=0,storeD,storeN; // storeD=to store last digit,StoreN to store entered num.
    printf("Enter the number to be Reversed:");
    scanf("%d", &num);
    storeN=num;
    while (num!=0)
    {
        storeD=num%10;
        revnum=revnum*10+storeD;
        num=num/10;
    }
    num=storeN;
    printf("The reverse of %d is : %d", num,revnum);
    
    return 0;
}