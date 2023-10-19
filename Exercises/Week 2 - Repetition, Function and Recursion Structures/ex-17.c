#include <stdio.h>

/* Exercise description: 
Develop a recursive function to convert a natural number in decimal base to binary base. The function must have the following prototype:

int dec2bin(int n_decimal);

Examples
Test 1
1110 == dec2bin(14);

Test 2
111 == dec2bin(7);*/

int dec2bin(int decimal_number);

int main()
{
    int decimal_number = 0, result = 0;

    printf("Enter a decimal number:\n");
    scanf("%d", &decimal_number);

    result = dec2bin(decimal_number);

    printf("Result: %d", result);

    return 0;
}

int dec2bin(int decimal_number){
    int remainder = 0, result = 0;

    if(decimal_number != 0){
        remainder = decimal_number % 2;

        decimal_number = decimal_number / 2;

        result = remainder + (10 * dec2bin(decimal_number));
    }

    return result;
}
