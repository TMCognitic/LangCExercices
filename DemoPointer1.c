#include <stdio.h>
#include <stdlib.h>

#define NBR_ELTS 5
#define byte unsigned char

int main(int argc, char *argv[])
{
    byte array[NBR_ELTS] = { 5U, 65U, 0U, 120U, 255U };
    byte *ptr_array = array;

    printf("ptr_array : %p | ptr_array + 5 : %p\n", ptr_array, ptr_array + 5);

    for (byte *ptr = ptr_array; ptr < ptr_array + NBR_ELTS; ptr++)
    {
        printf("ptr : %p | *ptr : %hu\n", ptr, *ptr);
    }
    
    return EXIT_SUCCESS;
}

