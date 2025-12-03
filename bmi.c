#include<stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter the weight of the person(in kgs):");
    scanf("%f",&weight);
    printf("Enter the height of the person(in mts):");
    scanf("%f", &height);
    if(weight==0 || height==0)
    {
        printf("Enter a non zero value.");
    }
    else
    {
    bmi =weight/(height*height);
    
    
    if(bmi<15)
    {
        printf("STARVATION");
    }
    else if(bmi>15 && bmi <= 17.5)
    {
        printf("ANOREXIC");
    }
    else if (bmi>17.5 && bmi<=18.5)
    {
        printf("UNDERWEIGHT");
    }
    else if (bmi>18.5 &&bmi <=24.9)
    {
        printf("IDEAL");

    }
    else if (bmi>24.9 && bmi<=25.9)
    {
        printf("OVERWEIGHT");
    }
    else if(bmi>26 && bmi<=30)
    {
        printf("SLIGHTLY MORE OVERWEIGHT");

    }
    else if(bmi>30 && bmi<=39.9)
    {
        printf("OBESE");
    }
    else if (bmi>40)
    {
        printf("MORBIDITY OBESE");
    }
}
    return 0;
}