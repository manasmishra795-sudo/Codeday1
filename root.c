#include<stdio.h>
#include<math.h>
int main()
{
    // quadratic eq= ax^2+bx+c
    // discriminant= b^2-4a*c
    double a , b , c, dis,r1,r2,real,imag;
    printf("Enter the coefficitents of a,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
    {
        r1= (-b+sqrt(dis))/(2*a);
        r2= (-b-sqrt(dis))/(2*a);
        printf("The roots are real and distinct\n");
        printf("The roots are:Root1=%.2lf Root2=%.2lf", r1,r2);
        
    }
    else if (dis==0)
    {
        r1=-b/(2*a);
        r2=r1;
        printf("The roots are real and equal\n");
        printf("Root 1=Root2 %.2lf",r1);
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(-dis)/(2*a);
        printf("The roots are imaginary\n");
        printf("ROOT 1 = %.2lf + %.2lfi\n", real, imag);
        printf("ROOT 2= %.2lf- %.2lfi\n",real, imag);
    }
    return 0;
}