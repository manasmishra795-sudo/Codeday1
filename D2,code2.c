#include<stdio.h>
int main()
{
    int radius=0;
    float area=0.0,circumference=0.0,pi=3.14;
    printf("Enter radius of  circle");
     scanf("%d" , & radius);
    area=pi*radius* radius;
    circumference=2*pi*radius;
    printf("The area of circle is:%f \n", area);
    printf("The circumference of circle is:%f \n",circumference);
    return 0;


}