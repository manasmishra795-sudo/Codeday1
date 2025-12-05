#include <stdio.h>
#include <stdlib.h>
int safeInputInt() 
{
    int num;
    while (scanf("%d",&num)!=1) 
    { 
        printf("Invalid input. Please enter an integer: ");
        while (getchar() != '\n'); 
    }
    while (getchar() != '\n');
    return num;
}
void input(int array[], int range)
{
    int i;
    for (i = 0; i < range; i++)
    {
        printf("Element %d: ", i + 1);
        array[i] = safeInputInt();
    }
}
void inputadditional(int array[], int startindex, int count)
{
    int i;
    for (i=0;i<count;++i)
    {
        printf("Element %d: ", startindex+i+1);
        array[startindex+i]=safeInputInt();
    }
}
void output(int array[], int range)
{
    int i;
    for (i = 0; i < range; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int ISPRIME(int n)
{
    if (n <= 1) return 0;
    int i, counter = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            counter++;
    }
    if (counter == 1)
        return 1;
    else
        return 0;
}
void printprime(int array[], int range)
{
    int i, check = 0;
    for (i = 0; i < range; i++)
    {
        if (ISPRIME(array[i]))
        {
            printf("%3d", array[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("None elements in the array are prime.");
    }
    printf("\n");
}
void printeven(int array[], int range)
{
    int i, check = 0;
    for (i = 0; i < range; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%3d", array[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("No even elements in the array.\n");
    }
    else
        printf("\n");
}
void printodd(int array[], int range)
{
    int i, check = 0;
    for (i = 0; i < range; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%3d", array[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("No odd elements in the array.\n");
    }
    else
        printf("\n");
}
void printpositive(int array[], int range)
{
    int i, check = 0;
    for (i = 0; i < range; i++)
    {
        if (array[i] > 0)
        {
            printf("%3d", array[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("No positive elements in the array.\n");
    }
    else
        printf("\n");
}
void printnegative(int array[], int range)
{
    int i, check = 0;
    for (i = 0; i < range; i++)
    {
        if (array[i] < 0)
        {
            printf("%3d", array[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("No negative elements in the array.\n");
    }
    else
        printf("\n");
}
void printzero(int array[], int range)
{
    int i, check = 0;
    for (i = 0; i < range; i++)
    {
        if (array[i] == 0)
        {
            printf("%3d", array[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("No 'zeroes' in the array.\n");
    }
    else
        printf("\n");
}
void clearscreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void pressentertocontinue() 
{
    printf("\nPress Enter to continue...");
    getchar();  // wait for Enter
}
int perform_resize(int **parray, int current_range)
{
    int newRange;
    do
    {
        printf("Enter new range of the array (1-100): ");
        newRange = safeInputInt();
        if (newRange > 100 || newRange <= 0)
        {
            printf("Invalid input. Enter again.\n");
        }
    } while (newRange> 100 || newRange<=0);

    if (newRange==current_range)
    {
        printf("Size unchanged:%d.\n", current_range);
        return current_range;
    }

    int *tmp =(int *)realloc(*parray, newRange*sizeof(int));
    if (!tmp)
    {
        printf("Reallocation failed. Keeping original size: %d.\n", current_range);
        return current_range;
    }
    *parray=tmp;

    if (newRange>current_range)
    {
        printf("Enter values for the new %d element(s):\n",newRange-current_range);
        inputadditional(*parray, current_range,newRange-current_range);
    }
    else
    {
        printf("Array shrunk from %d to %d elements.Elements beyond index %d are removed.\n",current_range, newRange, newRange - 1);
    }

    printf("New array size: %d\n", newRange);
    return newRange;
}
int main()
{
    int range,menu;

    do 
    {
        printf("Enter the range of the array(1-100): ");
        range = safeInputInt();
        if (range > 100 || range <= 0) 
        {
            printf("Invalid input. Enter again.\n");
        }
    } 
    while(range>100 || range<=0);

    printf("Valid range entered: %d\n", range);
    int *array=(int *)malloc(range * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements in the array:\n");
    input(array, range);
    int resize;
    while (1)
    {
        printf("\nDo you want to change the number of elements now?\n");
        printf("1.Yes\n");
        printf("2.No\n");
        printf("Enter choice: ");
        resize=safeInputInt();
        if (resize==1|| resize==2)
        break;
        printf("Invalid choice! Please enter 1 for Yes or 2 for No.\n");
    }

    if (resize==1)
    {
        range=perform_resize(&array, range);
    }
    do 
    {
        printf("\n--- MENU ---\n");
        printf("1. Print Prime Numbers\n");
        printf("2. Print Even Numbers\n");
        printf("3. Print Odd Numbers\n");
        printf("4. Print Positive Numbers\n");
        printf("5. Print Negative Numbers\n");
        printf("6. Print Zeroes\n");
        printf("7. Print All Elements\n");
        printf("8. Resize array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        menu=safeInputInt();
        clearscreen();
        switch (menu) 
        {
            case 1: printprime(array, range);      
            break;
            case 2: printeven(array, range);       
            break;
            case 3: printodd(array, range);        
            break;
            case 4: printpositive(array, range);   
            break;
            case 5: printnegative(array, range);   
            break;
            case 6: printzero(array, range);       
            break;
            case 7: output(array, range);          
            break;
            case 8:
            range=perform_resize(&array, range);
            break;
            case 0: printf("Exiting program.\n");   
            break;
            default: printf("Invalid choice. Try again.\n");
        }
        if(menu!=0) 
        {
            pressentertocontinue();  
            clearscreen();   
        }

    } 
    while (menu != 0);

    free(array);
    return 0;
}
