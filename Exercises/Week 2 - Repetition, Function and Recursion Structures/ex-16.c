#include <stdio.h>

/* Exercise description: 
Develop a recursive function count_freq that takes two natural numbers and indicates the frequency with which the second number appears in the first. The second number will always be less than 10.

For example, count_freq(12343, 3) = 2.

Your function should have the following prototype:

int count_freq(int num, int digit);
*/

int count_freq(int first_number, int second_number);

int main()
{
    int first_number = 0, second_number = 0, result = 0;

    printf("Enter a first number:\n");
    scanf("%d", &first_number);

    printf("Enter a second number:\n");
    scanf("%d", &second_number);

    result = count_freq(first_number, second_number);

    printf("Result: %d", result);

    return 0;
}

int count_freq(int first_number, int second_number){
    int frequency = 0, remainder = 0, result = 0;

    if(first_number != 0){
        remainder = first_number % 10;

        if(remainder == second_number){
            frequency++;
        }

        first_number = first_number / 10;

        result = frequency + count_freq(first_number, second_number);
    }

    return result;
}
