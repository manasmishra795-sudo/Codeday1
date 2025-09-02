#include<stdio.h>
int main()
{ 
    float num1,num2,sum,diff,product,quotient;
    int operations,mod;
    printf("Enter the two numbers\n");
    scanf("%f %f", &num1,&num2);
 printf("1=Adiition\n2=Subtraction\n3=Multiplication\n4=Division\n5=Modulus\n");
    printf("Enter a number(between 1 to 5):");
    scanf("%d",&operations);

    switch (operations)
    {
    case 1:
        sum=num1+num2;
        printf("Operation chosen=Addition\n");
        printf("The Sum =%.2f",sum);
        break;
    case 2:
    diff=num1-num2;
    printf("Operation chosen=Subtraction\n");
    printf("The difference=%.2f",diff);
    break;
    case 3:
    product=num1*num2;
    printf("Operation chosen=Multiplication\n");
    printf("The product=%.2f",product);
    break;
    case 4:
    if (num2==0)
    {
        printf("Operation chosen=Division\n");
        printf("Undefined Value");
    }
    else
    {
     quotient=num1/num2;
     printf("Operation chosen=Divison\n");
     printf("The quotient=%.2f",quotient);
    }
    break;
    case 5:
    if(num2==0)
    {
     printf("Operation chosen= Modulus\n"); 
     printf("Undefined Value");
    }  
    else
    {
    mod=(int)num1%(int)num2;
    printf("Operation chosen= Modulus\n");
    printf("The modulus=%d",mod);
    }
    break;
    default:
    printf("Invalid number entered.");
        break;
    }
    

    return 0;
}