#include<stdio.h>
int main()
{
    int rows,num,i,space,number;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    if(rows<=0)
    {
        printf("Enter a valid valuie.");
        return 0;
    }
    for(i=0;i<rows;i++)
    {
        number=rows-i;
        for(num=0;num<=i;num++)
        {
            
            printf("%d", number);
            number++;
            
        }
        printf("\n");

    }
    return 0;
}