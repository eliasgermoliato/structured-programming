#include <stdio.h>

/* Exercise description: 

Write a program that reads an integer and calculates the sum of all divisors of that number, except for itself. 
Example: the sum of the divisors of the number 66 is 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.


The following tests will be performed:

TEST 01:
Input:
66

Output:
78

TEST 02:
Input:
5

Output:
1

TEST 03:
Input:
230

Output:
202 */

int main()
{
    int number = 0, divider = 1, total = 0;

    printf("Enter an integer to calculate the sum of all its divisors:\n");
    scanf("%d", &number);

    for(; divider < number; divider = divider + 1){
        if(number%divider== 0){
            total = total + divider;
        }
    }

    printf("%d", total);

    return 0;
}