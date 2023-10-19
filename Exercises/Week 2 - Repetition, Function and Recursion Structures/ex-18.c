#include <stdio.h>

/* Exercise description: 
Consider the superfactorial of a number N as the product of the first N factorials of N.

Thus, the superfactorial of 4 is:

    superfactorial(4) = 1! * two! *3! *4! = 288

Make a recursive function that takes a positive integer N and returns the superfactorial of that number.

The function must have the following prototype:

long superfactorial(int n);

Examples
288 == superfactorial(4)*/

long superfactorial(int number);

int main()
{
    int number = 0, result = 0;

    printf("Enter a number:\n");
    scanf("%d", &number);

    result = superfactorial(number);

    printf("Result: %d", result);

    return 0;
}

long superfactorial(int number){
    int count = number;
    long result_fatorial = 1, result_final = 0;

    if(number == 1){
        return number;
    }

    while (count > 0){
        result_fatorial = result_fatorial * count;

        count--;
    }

    result_final = result_fatorial * superfactorial(number - 1);

    return result_final;
}
