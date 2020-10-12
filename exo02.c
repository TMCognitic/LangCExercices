#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, y;
    printf("Veuillez entrer deux nombres séparés par un espace : ");
    scanf("%d %d", &x, &y);

    printf("Addition : %d\nMultiplication : %d\nDivision : %d\n", x + y, x * y, x / y);
    return EXIT_SUCCESS;
}