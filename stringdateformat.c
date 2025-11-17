#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void convertDateFormat(const char *input, char *output) {
const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
char day[3], month[3], year[5];
strncpy(day, input, 2);
day[2] = '\0';
strncpy(month, input + 3, 2);
month[2] = '\0';
strncpy(year, input + 6, 4);
year[4] = '\0';
int monthIndex = atoi(month);
if (monthIndex < 1 || monthIndex > 12) 
{
strcpy(output, "Invalid month");
return;
}

sprintf(output, "%s-%s-%s", day, months[monthIndex - 1], year);
}
int main() 
{
char input[11];   // Format: dd/mm/yyyy (10 chars + null)
char output[20];  // Enough space for dd-Mmm-yyyy
printf("Enter date in dd/mm/yyyy format: ");
scanf("%10s", input);
convertDateFormat(input, output);
printf("Converted date: %s\n", output);
return 0;
}