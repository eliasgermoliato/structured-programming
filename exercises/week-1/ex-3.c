#include <stdio.h>

/* Exercise description:

Implement an algorithm to read the number of female and male students enrolled in the Structured Programming subject. 
The selection structure is used to check whether the classroom has the SAME number of male and female students 
OR whether it has MORE female students than male students 
OR whether it has MORE male and female students. 
If one of these checks is TRUE, the algorithm must write a specific message. 

For example, for the following INPUTS:

10
10

The following message should be printed (OUTPUT):

Same amount!

However, for INPUTS:

5
1

The OUTPUT should be:

There are more female students than male students!

Finally, for the INPUTS:

3
11

You must print (OUTPUT):

There are more male students than female students!

*/

int main()
{
    int number_male_students = 0, number_female_students = 0;

    printf("Enter the number of female students: \n");
    scanf("%d", &number_female_students);

    printf("Enter the number of male students: \n");
    scanf("%d", &number_male_students);

    if(number_male_students == number_female_students){
        printf("Same amount!");
    } else if(number_female_students > number_male_students){
        printf("There are more female students than male students!");
    } else if(number_male_students > number_female_students){
        printf("There are more male students than female students!");
    }

    return 0;
}