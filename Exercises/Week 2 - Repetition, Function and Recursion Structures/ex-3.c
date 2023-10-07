#include <stdio.h>

/* Exercise description: 

Implement an algorithm that displays a countdown on the screen, starting at N and ending at 0.
It is worth noting that N is defined by the user and must be >=0, and the program must be terminated ONLY when the user types N>= 0.
Additionally, a message "Number must be >=0!" must be printed if NUM<0. Finally, an “END!” message will be shown after counting.

The following tests will be performed:

TEST 01:

Input:
-7
3

Output:
The number must be >=0!
3 2 1 0
END!

TEST 02:
Input:
8

Output:
8 7 6 5 4 3 2 1 0
END! */

void decrement_number(int number_to_decrement);

int main()
{
   int input_number = 0;

    do{
        printf("Enter an integer greater than or equal to 0:\n");
        scanf("%d", &input_number);

        if(input_number < 0){
            printf("Number must be >=0!\n");
        }

   } while(input_number < 0);

    decrement_number(input_number);
    printf("\nEND!");

    return 0;
}

void decrement_number(int number_to_decrement){
    int min_reference_to_decrement = 0;

    while(number_to_decrement >= min_reference_to_decrement){
        printf("%d ", number_to_decrement);

        number_to_decrement = number_to_decrement - 1;
    }
}