#include <stdio.h>

/* Exercise description: 
Write a recursive function that calculates the SUM of the first n cubes:

S = 13 + 23 + ... + n3

The function must have the following prototype:

int sum(int n);

Important: Do not use the pow method in math.h.

The following tests will be performed on your algorithm:

Input:
4

Output:
100

--------

Input
5

Output:
225

--------

Input:
2

Output:
9*/

int sum(int number);

int main()
{
    int number = 0, result = 0;

    printf("Enter an integer:\n");
    scanf("%d", &number);

    result = sum(number);

    printf("Result: %d", result);

    return 0;
}

int sum(int number){
    int result = 0;

    if(number == 1){
        return number;
    }

    result = (number * number * number) + sum(number - 1);

    return result;
}