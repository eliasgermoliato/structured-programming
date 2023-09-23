#include <stdio.h>

/* Exercise description:

The amount of R$780.00 will be divided between three winners of a contest, being:

The first winner will receive 46% of the total;
The second will receive 32% of the total;
The third party will receive the rest.
Calculate and print, in TWO decimal places, the amount received by each of the winners.

TIP!!
To define the number of decimal places in a float variable, instead of %f, 
simply use %.2f, with the number two meaning TWO decimal places. 
For example:

printf("Testing %.2f\n", num);

In the exercise, the OUTPUTS will be:

First winner: R$ 358.80
Second winner: R$ 249.60
Third winner: R$ 171.60

*/

int main()
{
    float amount = 0, first_winner_amount = 0, second_winner_amount = 0, third_winner_amount = 0;

    amount = 780;

    first_winner_amount = amount * 0.46;
    second_winner_amount = amount * 0.32;
    third_winner_amount = amount * (1 - (0.46 + 0.32));

    printf("First winner: R$ %.2f\n", first_winner_amount);
    printf("Second winner: R$ %.2f\n", second_winner_amount);
    printf("Third winner: R$ %.2f\n", third_winner_amount);

    return 0;
}