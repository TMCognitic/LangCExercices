#include <stdio.h>
#include <stdlib.h>

#define NBR_ELTS 5

int main(int argc, char *argv[])
{
    int array[NBR_ELTS] = { 5, 65, 0, 120, 2147483647 };
    int *ptr_array = array;

    printf("ptr_array : %p | ptr_array + 5 : %p\n", ptr_array, ptr_array + 5);

    for (int *ptr = ptr_array; ptr < ptr_array + NBR_ELTS; ptr++)
    {
        printf("ptr : %p | *ptr : %d\n", ptr, *ptr);
    }
    
    return EXIT_SUCCESS;
}

