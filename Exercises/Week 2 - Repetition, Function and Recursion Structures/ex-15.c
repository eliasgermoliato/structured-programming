#include <stdio.h>

/* Exercise description: 
Multiplying two integers can be done through successive sums (e.g. 2 * 3 = 2 + 2 + 2). Create a recursive function that calculates multiplication by successive sums of TWO integers.

The function must have the following prototype:

int sum(int n1, int n2);

Important: submit only the sum function. Don't use global variables. Do not include main and do not use printf/puts in submitted functions.

The following tests will be performed on your algorithm:


Input 1:
2
3

Output 1:
6

Input 2:
3
6

Output 2:
18

Input 3:
5
4

Output 3:
20*/

int sum(int first_number, int second_number);

int main()
{
    int first_number = 0, second_number = 0, result = 0;

    printf("Enter a first number:\n");
    scanf("%d", &first_number);

    printf("Enter a second number:\n");
    scanf("%d", &second_number);

    result = sum(first_number, second_number);

    printf("Result: %d", result);

    return 0;
}

int sum(int first_number, int second_number){
    int result = 0;

    if(second_number == 1){
        return first_number;
    }

    second_number = second_number - 1;

    result = first_number + sum(first_number, second_number);
    
    return result;
}