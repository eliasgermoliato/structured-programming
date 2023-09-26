#include <stdio.h>

/* Exercise description:

Using the switch command, implement an algorithm that reads an integer between 1 and 7 and prints the day of the week corresponding to that number. That is, Sunday!, if 1, Monday!, if 2, and so on. Additionally, if the user enters any number other than 1-7, the message "Invalid number!" must be printed.

For example, your algorithm should be able to, using the following INPUT:

1

Print the result on the screen (OUTPUT):

Sunday!

In the case of INPUT:

9

The OUTPUT will be:

Invalid number!
*/

int main()
{
    int day_week = 0;

    printf("Enter the day of the week:\n");
    scanf("%d", &day_week);

    switch (day_week)
    {
    case 1:
        printf("Sunday!");
        break;
    case 2:
        printf("Monday!");
        break;
    case 3:
        printf("Tuesday!");
        break;
    case 4:
        printf("Wednesday!");
        break;
    case 5:
        printf("Thursday!");
        break;
    case 6:
        printf("Friday!");
        break;
    case 7:
        printf("Saturday!");
        break;
    default:
        printf("Invalid number!");
        break;
    }

    return 0;
}