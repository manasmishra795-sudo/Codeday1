#include <stdio.h>

int main() {
    int tseconds, hours, minutes, seconds;


    printf("Enter time in seconds: ");
    scanf("%d", &tseconds);


    hours = tseconds / 3600;
    minutes = (tseconds % 3600) / 60;
    seconds = tseconds % 60;

    // Output
    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
