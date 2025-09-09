#include<stdio.h> // not done 
int main()
{
    int num1,num2,i,lcm;
    printf("Enter the numbers :");
    scanf("%d %d",&num1,&num2);
    if(num1<=0 || num2<=0)
    {
        printf("Please enter positive value only.");
        return 0;
    }
    for(i= (num1 > num2 ? num1 : num2); i <= num1 * num2; i++)// loop to check for lcm
    {
     if(i%num1==0 && i%num2==0)// condition to check for lcm
     {
     lcm=i;
     break;
     }
      
    }
    printf("The LCM of %d and %d are:%d",num1,num2,lcm);
    
    return 0;
}