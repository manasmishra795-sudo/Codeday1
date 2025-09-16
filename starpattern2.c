#include<stdio.h>
int main ()
{
    int rows,i,stars;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Enter a valid value.");
        return 0;
    }
    for(i=0;i<rows;i++)
    {
        for(stars=rows-i;stars>0;stars--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}