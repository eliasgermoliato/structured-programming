#include <stdio.h>

/* Exercise description:

Write a program that reads an integer and reports whether the number is EVEN, ODD or NEUTRAL.

For example, for INPUT:

-4

The program must present as OUTPUT:

Even number!

In the second example, for INPUT:

7

The program must present as OUTPUT:

Odd number!

In the third example, for INPUT:

0

The program must present as OUTPUT:

NEUTRAL number!
*/

int main()
{
    int number = 0;

    printf("Enter a number:\n");
    scanf("%d", &number);

    if(number == 0){
        printf("Neutral number!");
    } else if(number%2 == 0){
        printf("Even number!");
    } else {
        printf("Odd number!");
    }

    return 0;
}
