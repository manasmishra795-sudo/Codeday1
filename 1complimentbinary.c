#include<stdio.h>
int main()
{
    int range,binary[32],i,counter=0;
    printf("Enter the range of binary number:");
    scanf("%d",&range);
    if(range<0 || range>32)
    {
        printf("Please enter a valid value for range");
        return 0;
    }
    printf("Enter the binary number:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&binary[i]); 
    }

        printf("Binary number=");
    for(i=0;i<range;i++)
    {
        printf("%d",binary[i]);
        if(binary[i]%2==0)
    {
        binary[i]=1;
    }
       
    }
    printf("\n");
    printf("Compliment of binary number=");
    for(i=0;i<range;i++)
    {
         printf("%d", binary[i]);
    }
    
    
    
    return 0;
}