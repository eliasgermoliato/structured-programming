#include <stdio.h>

/* Exercise description: 

Implement the sum_integers function that receives the values ​​n1 and n2. After that, the SUM of n1 and n2 must be calculated and returned.

Function prototype:

int sum_integers(int n1, int n2);

Test case format: this is the format of the test cases that appear when evaluating the activity;

Input:
integer n1
integer n2

Output:
integer n1
integer n2
return from the sum_integers function*/

int sum_integers(int first_number, int second_number);

int main()
{
    int first_number = 0, second_number = 0, result = 0;

    printf("Enter the first number:\n");
    scanf("%d", &first_number);

    printf("Enter the second number:\n");
    scanf("%d", &second_number);

    result = sum_integers(first_number, second_number);

    printf("Result is: %d", result);

    return 0;
}

int sum_integers(int first_number, int second_number) {
    int result = first_number + second_number;
    
    return result;
}