#include<stdio.h>
int main()
{
    int rows,star,i,space;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Enter a valid value.");
        return 0;
    }
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(star=1;star<=2*i-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(star=1;star<=2*i-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}