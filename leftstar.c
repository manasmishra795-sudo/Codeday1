#include<stdio.h>
int main ()
{
    int rows,i,star;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Enter a valid value.");
        return 0;
    }
    for(i=0;i<rows;i++)
    {
        for(star=0;star<=i;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}