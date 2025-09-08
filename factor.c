#include<stdio.h>
int main()
{
    int num,i, factor[1000],counter=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Please enter a positive value only");
        return 0;
    }
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            factor[counter]=i;
            counter++;
        }
    }
    printf("The factors of %d are:\n",num);
    for(i=0;i<counter;i++)
    {
      printf("%d",factor[i]);
      printf("\n");
    }
    return 0;
}