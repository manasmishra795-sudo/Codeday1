#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the vakue of b");
    scanf("%d", &b);
    printf("The numbers before being swapped are a=%d, b= %d,\n", a,b);
    a= a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after being swapped are a= %d, b=%d,\n", a ,b);
    return 0;
}