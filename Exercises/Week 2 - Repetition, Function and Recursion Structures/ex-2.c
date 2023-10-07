#include <stdio.h>

/* Exercise description: 

Write a program that reads an integer N and then prints the first N ODD and EVEN natural numbers.

For example, for the following INPUT:

10

The algorithm should print (OUTPUTS):

1 3 5 7 9
0 2 4 6 8 10 */

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