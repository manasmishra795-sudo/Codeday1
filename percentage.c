#include<stdio.h>
int main ()
{
    float mark, totalmark=100.0,percent;
    printf("Enter the marks of the student:");
    scanf("%f",&mark);
    percent= (mark/totalmark)*100;
    if (percent>=90.0)
    {
        printf("GRADE= A+");
    }
    else if (percent<90.0 && percent>=80.0)
    {
        printf("GRADE = A");
    }
    else if(percent<80.0 && percent>=70.0)
    {
        printf("GRADE = B+");
    }
    else if (percent<70.0 && percent>=60.0)
    {
        printf("GRADE = B");
    }
    else if (percent<60.0 && percent>= 50.0)
    {
        printf("Grade = C");
    }
    else if(percent<50.0 && percent>= 40.0)
    {
        printf("GRADE = D");
    }
    else 
    {
        printf("The student has failed ");
    }
    return 0;
}