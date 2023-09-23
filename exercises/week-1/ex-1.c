#include <stdio.h>

int main()
{
    int number_male_students = 0, number_female_students = 0, total_students = 0;

    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &number_male_students);

    printf("Digite a quantidade de alunas: \n");
    scanf("%d", &number_female_students);

    total_students = number_male_students + number_female_students;

    printf("Alunos: %d\n", number_male_students);
    printf("Alunas: %d\n", number_female_students);
    printf("Total: %d", total_students);

    return 0;
}