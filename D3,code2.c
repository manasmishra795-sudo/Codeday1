#include<stdio.h>
int main()
{
    int a,b, store;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Numbers before swapping: a = %d, b = %d\n", a, b);
    store=a;
    a=b;
    b=store;
    printf("The numbers after being swapped are: a= %d, b=%d\n",a, b);
    return 0;
}