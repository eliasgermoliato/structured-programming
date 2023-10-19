#include <stdio.h>

/* Exercise description: 
Create a recursive function that takes an integer N and returns the SUM of the numbers from 1 to N.

The function must have the following prototype:

int sum(int n);

The following tests will be performed on your algorithm:

INPUT 1:
2

OUTPUT 1:
3

INPUT 2:
5

OUTPUT 2:
15*/

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

    result = number + sum(number - 1);
    
    return result;
}