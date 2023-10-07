#include <stdio.h>

/* Exercise description: 

Write a program that reads (via keyboard) in the following order, the number of Sony, Dell and Toshiba brand notebooks in a store. 
As output, the program must present the number of notebooks broken down by brand (Sony, Dell and Toshiba) and their total.

For example, for the following INPUTS:

10
6
1

The algorithm should print (OUTPUT) on the screen:

10 Sony notebook(s)
6 Dell notebook(s)
1 Toshiba notebook(s)
Total of 17 notebooks */

int main()
{
    int sony_notebooks = 0, dell_notebooks = 0, toshiba_notebooks = 0, total_notebooks = 0;

    printf("Enter the number of Sony notebooks: \n");
    scanf("%d", &sony_notebooks);

    printf("Enter the number of Dell notebooks: \n");
    scanf("%d", &dell_notebooks);

    printf("Enter the number of Toshiba notebooks: \n");
    scanf("%d", &toshiba_notebooks);

    total_notebooks = sony_notebooks + dell_notebooks + toshiba_notebooks;

    printf("%d Sony notebook(s)\n", sony_notebooks);
    printf("%d Dell notebook(s)\n", dell_notebooks);
    printf("%d Toshiba notebooks(s)\n", toshiba_notebooks);
    printf("Total of %d notebooks", total_notebooks);

    return 0;
}