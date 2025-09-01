#include<stdio.h>
int  main ()
/*1st 100 units =5rs per unit
101-300 units =7rs per unit 
 301-500 units=10rs per unit
  500 above=15rs per unit */
{
    int unit,bill;
    printf("Enter the number of units consumed:");
    scanf("%d",&unit);
    if(unit<=100)
    {
    bill=unit*5;
    printf("Unit consumed=%d\n",unit);
    printf("Your Electricity bill is %d rupees",bill);
    }
    else if (unit>100 && unit <=300)
    {
        bill= 500+(unit-100)*7;
        printf("Unit consumed=%d\n",unit);
        printf("Your Electricity bill is %d rupees",bill);
    }
    else if(unit>300 && unit<=500)
    {
        bill=1900+(unit-300)*10;
        printf("Unit consumed=%d\n",unit);
        printf("Your Electricity bill is %d rupees",bill);
    }
    else
    {
        bill=3900+(unit -500)*15;
        printf("Unit consumed=%d\n",unit);
        printf("Your Electricity bill is %d rupees",bill);
    }
    return 0;
}