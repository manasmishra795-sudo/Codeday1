#include<stdio.h>
int main()
{ int i,n,counter=0,k;
    printf("Enter the number to check for prime:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter a valid value.");
        return 0;
    }
    printf("The prime numbers from 1 to %d are:",n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            if(i%k==0)
            {
              counter++;
            }
        }
        if(counter==2)
            {
              printf("%2d",i);
            }
    counter=0;
}
return 0;
}