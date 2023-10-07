#include <stdio.h>

/* Exercise description: 

Write a program that reads a positive integer N and prints all natural numbers from 0 to N in INCREASING and DECREASING order.

For example, for the following INPUT:

10

The algorithm should print (OUTPUTS):

0 1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1 0

In the case of INPUT:

5

The algorithm should print (OUTPUTS):

0 1 2 3 4 5
5 4 3 2 1 0 */

void increment_number(int max_reference_to_increment);
void decrement_number(int number_to_decrement);

int main()
{
   int number = 0;

    printf("Enter a positive integer to increase and decrease:\n");
    scanf("%d", &number);

    if(number < 0){
        printf("Invalid input!");
    } else {
        increment_number(number);
        printf("\n");
        decrement_number(number);
    }

    return 0;
}

void increment_number(int max_reference_to_increment){
    int incremented_number = 0;

    while(incremented_number <= max_reference_to_increment){
        printf("%d ", incremented_number);

        incremented_number = incremented_number + 1;
    }
}

void decrement_number(int number_to_decrement){
    int min_reference_to_decrement = 0;

    while(number_to_decrement >= min_reference_to_decrement){
        printf("%d ", number_to_decrement);

        number_to_decrement = number_to_decrement - 1;
    }
}