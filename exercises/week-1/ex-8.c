#include <stdio.h>
#include <math.h>

/* Exercise description:

Let a and b be the legs of a triangle whose hypotenuse h is obtained by the equation:

h = √a^2+b^2

Write a program that reads the values ​​of a and b (float), calculates and prints the value of the hypotenuse using the given formula.

TIP!!

The square root is calculated using the sqrt() function and the math.h library (#include<math.h>). To learn how to use this function, access the following link: http://linguagemc.com.br/a-biblioteca-math-h/

The following tests will be performed:

ENTRIES 1:

5.4
4.3

OUTPUT 1:

The hypotenuse is: 6.902898

ENTRIES 2:

4.0
3.0

OUTPUT 2:

The hypotenuse is: 5.000000
*/

int main()
{
    float value_a = 0, value_b = 0, c_squared = 0, hypotenuse = 0;

    scanf("%f", &value_a);
    scanf("%f", &value_b);

    c_squared = pow(value_a, 2) + pow(value_b, 2);
    hypotenuse = sqrt(c_squared);

    printf("A hipotenusa eh: %f", hypotenuse);

    return 0;
}