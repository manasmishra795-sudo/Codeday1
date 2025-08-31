#include<stdio.h>
int main()
{
    float cp , sp, profit, loss;
    printf("Enter the Cost Price and Selling Price :");
    scanf("%.2f %.2f", &cp,&sp);
    profit= ((sp-cp)/cp)*100;
    loss= ((cp-sp)/cp)*100;
    if (sp>cp)
    {
        printf("PROFIT= %.2fpercent",profit);
    }
    else if (sp<cp)
    {
        printf("LOSS= %.2fpercent", loss);
    }
    else
    {
        printf("No Profit, No Loss");
    }
    
    return 0;
}