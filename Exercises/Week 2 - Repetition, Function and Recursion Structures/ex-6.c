#include <stdio.h>

/* Exercise description: 

The harmonic number designated by Hn is defined as the nth term of the harmonic series. 

I.e:
HN = 1 + 1/2 + 1/3 + 1/4 + ... 1/n

Implement an algorithm that calculates the value of any Hn.

PS: Hn must be rounded to ONE decimal place.

The following tests will be performed:

TEST 01:
Input:
2

Output:
1.5

TEST 02:
Input:
100

Output:
5.2

TEST 03:
Input:
5

Output:
2.3 */

float calculate_harmonic_number(int number);

int main()
{
    int number = 0;
    float harmonic_number = 0;

    printf("Enter a number to calculate your harmonic number:\n");
    scanf("%d", &number);

    harmonic_number = calculate_harmonic_number(number);

    printf("%.1f", harmonic_number);

    return 0;
}

float calculate_harmonic_number(int number){
    int first_number = 1, second_number = 1;
    float harmonic_number = 0;

    while(second_number <= number){
        harmonic_number = harmonic_number + ((float)first_number/second_number);

        second_number = second_number + 1;
    }

    return harmonic_number;
}