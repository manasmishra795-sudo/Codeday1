#include<stdio.h>
int main()
/*1-10 late=2rs per day fine
11-20 late=5rs per day fine
21-30 late=10 rs per day fine
>30 membership cancelled*/
{
    int days, fine;
    printf("Enter the number of Days Late:");
    scanf("%d",&days);
    if (days<=10)
    {
     fine =2*days;
     printf("FINE=%d rupees",fine);
    }
    else if (days>10 && days<=20)
    {
        fine=20+(days-10)*5;
        printf("FINE=%d rupees",fine);
    }
    else if (days>20 && days<=30)
    {
        fine=70+(days-20)*10;
        printf("FINE=%d rupees",fine);
    }
    else{
        printf("MEMBERSHIP CANCELLED");
    }
    return 0;
}