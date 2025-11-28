#include<stdio.h>
typedef enum {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY}days;
int main()
{
    days sun=SUNDAY;
    days mon=MONDAY;
    days tue=TUESDAY;
    days wed=WEDNESDAY;
    days thu=THURSDAY;
    days fri=FRIDAY;
    days sat=SATURDAY;
    printf("SUNDAY=%d\n",sun);
    printf("MONDAY=%d\n",mon);
    printf("TUESDAY=%d\n",tue);
    printf("WEDNESDAY=%d\n",wed);
    printf("THURSDAY=%d\n",thu);
    printf("FRIDAY=%d\n",fri);
    printf("SATURDAY=%d\n",sat);
    return 0;
}