#include<stdio.h>
int main()
{
    int num , binary[7],i=0,k;
    printf("Enter a positive number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Please enter a positive number only.\n");
    }
    else if(num==0)
    {
        printf("Binary=0\n");
        
    }
    else {
        while(num>0)
        {
            binary[i]=num%2;
            num=num/2;
            i++;
        }


    
    printf("Binary representation is :");
    
    for(k=i-1;k>=0;k--)
    {
     printf("%d",binary[k]);
    }

    printf("\n");
}
    
    return 0;
}