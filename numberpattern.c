#include<stdio.h>
int main()
{
    int rows,num,i;
    printf("Enter the number of roews:");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Enter a valif value.");
        return 0;
    }
    for(i=1;i<=rows;i++)
    {
        for(num=1;num<=i;num++)
        {
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}