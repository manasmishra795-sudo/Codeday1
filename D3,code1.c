#include<stdio.h>
int main()
{
    float celcius,farenheit;
    printf("Enter the temperature:");
    scanf("%f",&celcius);
    farenheit=(1.8*celcius)+32;
    printf("Temperature in fareheit is %f", farenheit);
    return 0;

}
