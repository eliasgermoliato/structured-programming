#include <stdio.h>

/* Exercise description:

Implement an algorithm that calculates the mathematical operations of Addition, Subtraction, Division and Multiplication. 
To do this, the user must choose, as INPUT, 1 for Sum, 2 - Subtraction, 3 - Division and 4 - Multiplication. 

After choosing, still as INPUT, you must request TWO numerical values. 
With the choice of operation (1-4) and the two values, the system must perform the operation and display (OUTPUT) the result.
However, if the user types any option other than 1-4, the following message should be displayed: "Invalid Number!".
Furthermore, the numerical values ​​of SUM, SUBTRACTION and MULTIPLICATION operations must be declared as INTEGER (int) and in the case of DIVISION, they must be double.

In the first test, if the user defines as INPUTS:

1
5
4

The result (OUTPUT) will be:

The result of the sum is: 9

In the case of INPUTS:

two
9
1

The OUTPUT will be:

The result of the subtraction is: 8

For ENTRIES:

3
7
two

The algorithm should print (OUTPUT):

The result of the division is: 3.500000

If the INPUTS are:

4
8
5

The OUTPUT should be:

The result of the multiplication is: 40

Finally, for the INPUT:

9

The OUTPUT will be:

Invalid number!
*/

void addition(int first_number, int second_number);
void subtraction(int first_number, int second_number);
void division(float first_number, float second_number);
void multiplication(int first_number, int second_number);

int main()
{
    int operator = 0, first_number = 0, second_number = 0;

    printf("Enter the arithmetic operator:\n");
    scanf("%d", &operator);

    printf("Enter the first number:\n");
    scanf("%d", &first_number);

    printf("Enter the second number:\n");
    scanf("%d", &second_number);

    switch (operator)
    {
    case 1:
        addition(first_number, second_number);
        break;
    case 2:
        subtraction(first_number, second_number);
        break;
    case 3:
        division((float)first_number, (float)second_number);
        break;
    case 4:
        multiplication(first_number, second_number);
        break;
    default:
        printf("Invalid number!");
        break;
    }

    return 0;
}

void addition(int first_number, int second_number){
    int result = 0;

    result = first_number + second_number;

    printf("The result of the sum is: %d", result);
}

void subtraction(int first_number, int second_number){
    int result = 0;

    result = first_number - second_number;

    printf("The result of the subtraction is: %d", result);
}

void division(float first_number, float second_number){
    float result = 0;

    result = first_number/second_number;

    printf("The result of the division is: %f", result);
}

void multiplication(int first_number, int second_number){
    int result = 0;

    result = first_number * second_number;

    printf("The result of the multiplication is: %d", result);
}