#include <stdio.h>

/* Exercise description:

Write a program that reads TWO WHOLE numbers and displays the BIGGEST of them. If, by chance, the two numbers are EQUAL, print the message “Equal numbers!”.

Your algorithm should be able to, using the following INPUTS:

6

Print on the screen (OUTPUT) the following result:

6 is the biggest number!

In the case of INPUTS:

4
4

The OUTPUT will be:

Equal numbers!

Finally, for the INPUTS:

7
3

The following OUTPUT will be printed:

7 is the biggest number!
*/

int main()
{
    int first_number = 0, second_number = 0, biggest_number = 0;

    printf("Enter the first value:\n");
    scanf("%d", &first_number);

    printf("Enter the second value:\n");
    scanf("%d", &second_number);

    if(first_number == second_number){
        printf("Equal numbers!");
        return 0;
    }

    biggest_number = first_number > second_number ? first_number : second_number;

    printf("%d is the biggest number!", biggest_number);

    return 0;
}