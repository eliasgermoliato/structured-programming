#include <stdio.h>

int main()
{
    int sony_notebooks = 0, dell_notebooks = 0, toshiba_notebooks = 0, total_notebooks = 0;

    printf("Digite a quantidade de notebooks da Sony: \n");
    scanf("%d", &sony_notebooks);

    printf("Digite a quantidade de notebooks da Dell: \n");
    scanf("%d", &dell_notebooks);

    printf("Digite a quantidade de notebooks da Toshiba: \n");
    scanf("%d", &toshiba_notebooks);

    total_notebooks = sony_notebooks + dell_notebooks + toshiba_notebooks;

    printf("%d notebook(s) da Sony\n", sony_notebooks);
    printf("%d notebook(s) da Dell\n", dell_notebooks);
    printf("%d notebook(s) da Toshiba\n", toshiba_notebooks);
    printf("Total de %d notebooks", total_notebooks);

    return 0;
}