#include <stdio.h>
#include <stdbool.h>

/* Exercise description:

Create an algorithm that reads a YEAR and reports as OUTPUT if it is a LEAP YEAR.

A YEAR is a LEAP YEAR in TWO cases:

1) When it is divisible by 4 but not divisible by 100.
2) When it is divisible by 4, it is divisible by 100 and is also divisible by 400.

For INPUT:

2000

The program must present as OUTPUT:

It's a Leap Year!

For INPUT:

1900

The program must present as OUTPUT:

It's not Leap Year!

For INPUT:

1996

The program must present as OUTPUT:


It's a Leap Year!
*/

bool isLeapYear(int year);

int main()
{
    int year = 0;

    printf("Enter the year:\n");
    scanf("%d", &year);

    if(isLeapYear(year)){
        printf("It's a Leap Year!");
    } else {
        printf("It's not Leap Year!");
    }
    
    return 0;
}

bool isLeapYear(int year){
    if(((year % 4) == 0)) {
        if((year % 100 == 0)){
           if(year % 400 == 0){
             return true;
           }
        } else {
            return true;
        }
    }
    return false;
}

