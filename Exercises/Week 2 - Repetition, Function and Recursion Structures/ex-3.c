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

void print_odd_number(int max_reference_to_increment);
void print_even_number(int max_reference_to_increment);

int main()
{
   int inputNumber = 0;
   
   printf("Enter an integer:\n");
   scanf("%d", &inputNumber);

    print_odd_number(inputNumber);
    printf("\n");
    print_even_number(inputNumber);

   return 0;
}

void print_odd_number(int max_reference_to_increment){
    int odd_number = 1;

    while(odd_number <= max_reference_to_increment){
        printf("%d ", odd_number);

        odd_number = odd_number + 2;
    }
}

void print_even_number(int max_reference_to_increment){
    int even_number = 0;

    while(even_number <= max_reference_to_increment){
        printf("%d ", even_number);

        even_number = even_number + 2;
    }
}