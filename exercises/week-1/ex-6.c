#include <stdio.h>

/* Exercise description:

Write a program that reads an integer and prints its predecessor and successor.

For example, for INPUT:

5

The following messages will be printed (OUTPUTS):

Predecessor of 5 is: 4
Successor of 5 is: 6

In the second example, for INPUT:

0

Your algorithm must inform (OUTPUTS):

Predecessor of 0 is: -1
Successor of 0 is: 1

*/

int main()
{
    int number = 0, previous_number = 0, next_number = 0;

    printf("Enter a number: \n");
    scanf("%i", &number);

    previous_number = number - 1;
    next_number = number + 1;

    printf("Predecessor of %i is: %i\n", number, previous_number);
    printf("Successor of %i is: %i", number, next_number);

    return 0;
}