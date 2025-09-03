#include<stdio.h>
int main()
{
    int i,num,product=1;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<2)
    {
        printf("No even numbers detected in this interval.");
    }
else
{
    for (i=2;i<=num;i=i+2)
    {
        product=product*i;
    }
        printf("The product of even numbers from 1 to %d is:%d\n",num,product);
    
    
}
    return 0;
}