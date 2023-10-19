#include <stdio.h>

/* Exercise description: 

Write a function that takes two numeric values ​​(INTEGER) and a symbol (CHAR). 
This symbol will represent the operation you want to perform with the numbers. 
Thus, if the symbol is “+”, an addition must be carried out, if it is “−”, a subtraction, if it is “/”, a division and if it is “*”, a multiplication will be carried out. 
Finally, the result of the operation must be returned.

Function prototype:
float operation(float n1, float n2, char simb);

Test case format: this is the format of the test cases that appear when evaluating the activity;

Input:
integer n1
integer n2
char simb

Output:

return from operation function*/

float simple_calculator(float first_number, float second_number, char operator);

int main()
{
    float first_number = 0, second_number = 0, result = 0;
    char operation_code = 0;

    printf("Enter the first number:\n");
    scanf("%f", &first_number);

    printf("Enter the second number:\n");
    scanf("%f", &second_number);

    printf("Enter the operation symbol (+, -, / or *):\n");
    scanf("%s", &operation_code);

    result = simple_calculator(first_number, second_number, operation_code);

    printf("Result is: %.2f", result);

    return 0;
}

float simple_calculator(float first_number, float second_number, char operator){
    float result = 0.0;
    
    switch(operator){
        case '+':
            result = first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
        case '/':
            result = first_number / second_number;
            break;
        case '*':
            result = first_number * second_number;
            break;
    }
    
    return result;
}