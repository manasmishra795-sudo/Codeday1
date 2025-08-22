#include<stdio.h>
int main ()
{
    int length=0,breadth=0,perimeter=0,area=0;
    printf("Enter length of rectangle");
    scanf("%d ",&length);
    printf("Enter breadth of recntangle");
    scanf("%d ",&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    printf("The perimeter of rectangle is : %d \n", perimeter);
    printf("The area of rectangle is: %d \n",area);
    return 0;
}