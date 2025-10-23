#include<stdio.h>
int main()
{
    int rows,star,i;
    printf("Enter the number of rows :");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Enter a valid value.");
        return 0;
    }
    for(i=0;i<rows;i++)
    {
    for(star=1;star<=2*i+1;star++)
    {
        printf("*");
        printf("\n");
    }
    printf("\n");
    }
    for(i=rows-1;i>0;i--)
    {
        for(star=1;star<=2*i-1;star++)
    {
        printf("*");
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}