#include<stdio.h>
int main()
{
    int num,i,sum=0,count=0;
    printf("Enter the number:");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        count=2*i+1;
        sum=sum+count;
    }
        printf("The sum of first n odd numbers is:%d", sum);
    
    return 0;
}
