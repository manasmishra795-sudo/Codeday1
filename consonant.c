#include<stdio.h>
int main()
{
    char letter;
    printf("Enter the letter:");
    scanf("%c", &letter);
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'|| letter == 'A' || letter== 'E' || letter == 'I' || letter== 'O' || letter== 'U')
    {
        printf("The entered letter is a vowel");
    }
    else
    {
        printf("The entered letter is a consonant");
    }
    return 0;

}