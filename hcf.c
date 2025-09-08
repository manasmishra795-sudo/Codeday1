#include<stdio.h>
int main()
{
    int num1,num2,i ,k,l,factor1[100],factor2[100],counter1=0,counter2=0,counter3=0,hcf[100];
    printf("Enter the numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1<=0||num2<=0)
    {
    printf("Please enter a positive value only.");
    return 0;
    }
    for(i=1;i<=num1;i++) // factors of num1
    {
        if(num1%i==0)
        {
            factor1[counter1]=i;
            counter1++;
        }
    }
    
    for(k=1;k<=num2;k++) // factors of num2
    {
        if(num2%k==0)
        {
            factor2[counter2]=k;
            counter2++;
        }
    }
    
    for(i=0;i<counter1;i++) // loop for common factors
    {
            for(k=0;k<counter2;k++)
        {
            if(factor1[i]==factor2[k]) // common factor check
            {
              hcf[counter3]=factor1[i];
              counter3++;
            }
        }
     }
     printf("The common factors of %d and %d are:\n",num1,num2);
     for(i=0;i<counter3;i++)
     {
        printf("%d",hcf[i]);
        printf("\n");
     }
     printf("The Highest Common Factor between %d and %d is:%d",num1,num2,hcf[counter3-1]);
    return 0;
}