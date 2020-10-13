#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Exo 2.1
    int x = 16, y = 5;
    printf("Exo 2.1\nAddition : %d\nMultiplication : %d\nDivision entière : %d\n\n", x + y, x * y, x / y);
    //Exo 2.2
    printf("Exo 2.2\nAddition : %d\nMultiplication : %d\nDivision : %lf\n\n", x + y, x * y, (double)x / y);
    //Exo 2.3
    int z = 16;
    double d = 5;
    printf("Exo 2.3\nAddition : %lf\nMultiplication : %lf\nDivision entière : %lf\n\n", z + d, z * d, z / d);
    //Exo 2.4
    double myDouble = 25;
    //Exo 2.5
    double *double_ptr = &myDouble;
    //Exo 2.6
    printf("Exo 2.6\nmyDouble : %p\n&myDouble : %p\n*myDouble : %lf\n\n", double_ptr, &double_ptr, *double_ptr);

    //Exo 2.7    
    int a = 7, b = 17;
    printf("Exo 2.7\na : %d\nb : %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Exo 2.7\na : %d\nb : %d\n", a, b);
    return EXIT_SUCCESS;
}