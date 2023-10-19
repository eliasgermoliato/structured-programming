#include <stdio.h>

/* Exercise description: 
Write a recursive function that receives TWO integer values ​​n1 and n2 as a parameter and calculates and returns the result of n1n2 to the main program.

The function must have the following prototype:

int power(int n1, int n2);

Important: submit only the power function. Don't use global variables. Do not include main and do not use printf/puts in submitted functions.

The following tests will be performed on your algorithm:

Input 1:
2
3

Output 1:
8

Input 2:
4
5

Output 2:
1024

Input 3:
6
9

Output 3:
10077696*/

int power(int base, int exponent);

int main()
{
    int base = 0, exponent = 0, result = 0;

    printf("Enter a base:\n");
    scanf("%d", &base);

    printf("Enter a exponent:\n");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("Result: %d", result);

    return 0;
}

int power(int base, int exponent){
    int result = 0;

    if(exponent == 1){
        return base;
    }

    exponent = exponent - 1;

    result = base * power(base, exponent);
    
    return result;
}