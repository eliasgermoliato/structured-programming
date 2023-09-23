#include <stdio.h>

/* Exercise description: 

Write a program that reads the number of students in a room.
As output, the program must present the number of students and the total number of students in the room.

For example, for the following INPUTS:

10
6

The algorithm should print (OUTPUTS):

Male Students: 10
Female Students: 6
Total: 16 */

int main()
{
    int number_male_students = 0, number_female_students = 0, total_students = 0;

    printf("Enter the number of male students: \n");
    scanf("%d", &number_male_students);

    printf("Enter the number of female students: \n");
    scanf("%d", &number_female_students);

    total_students = number_male_students + number_female_students;

    printf("Male students: %d\n", number_male_students);
    printf("Female students: %d\n", number_female_students);
    printf("Total: %d", total_students);

    return 0;
}