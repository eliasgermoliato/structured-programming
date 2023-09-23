#include <stdio.h>

/* Exercise description:

Create a program that asks the user to enter the following order using the keyboard: value of the day, month and year (integers). 
Then print the read values ​​separated by a slash (/).

For example, for INPUTS:

10
12
2021

The following date (OUTPUT) will be printed:

10/12/2021

*/

int main()
{
    int day = 0, month = 0, year = 0;

    printf("Enter the day: \n");
    scanf("%i", &day);

    printf("Enter the month: \n");
    scanf("%i", &month);

    printf("Enter the year: \n");
    scanf("%i", &year);

    printf("%i/%i/%i", day, month, year);

    return 0;
}