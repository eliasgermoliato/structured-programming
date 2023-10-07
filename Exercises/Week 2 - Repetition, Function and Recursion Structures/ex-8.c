#include <stdio.h>

/* Exercise description: 

Write a program that READS an integer and positive value N, calculates and displays the value E (two decimal places), according to the following formula:

E = 1/1! + 1/2! + 1/3! + ... + 1/N!

The following tests will be performed:

TEST 01:
Input:
7

Output:
1.72

TEST 02:
Input:
2

Output:
1.50*/

int calculate_factorial(int number);

int main()
{
    int first_number = 1, second_number = 1, number = 0;
    float result = 0;

    printf("Enter an integer:\n");
    scanf("%d", &number);

    while(second_number <= number){
        int second_number_factorial = calculate_factorial(second_number);
        result = result + ((float)first_number/second_number_factorial);

        second_number = second_number + 1;
    }

    printf("%.2f", result);

    return 0;
}

int calculate_factorial(int number){
    int result = 0;

    if(number == 0){
        return 1;
    }

    result = number * calculate_factorial(number - 1);

    return result;
}