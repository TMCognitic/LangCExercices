#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ushort unsigned short

int main(int argc, char *argv[])
{
    //Exo 5.1
    ushort size;
    printf("quelle est la taille du tableau? : ");
    scanf("%hu", &size);

    int tab[size];

    for (ushort index = 0; index < size; index++)
    {
        printf("Entrez le nombre %d :", index + 1);
        scanf("%d", &tab[index]);
    }

    int somme = 0;
    for (ushort index = 0; index < size; index++)
    {
        somme += tab[index];
    }
    printf("la moyenne est de %f : \n", (size == 0) ? 0 : (float)somme / size);
    
    //Exo 5.2
    const int asciiDiff = '0';
    //char *nbr1 = "9472", *nbr2 = "748";
    char nbr1[50], nbr2[50];
    printf("Entrez le premier nombre? : ");
    scanf("%s", nbr1);

    printf("Entrez le second nombre? : ");
    scanf("%s", nbr2);    
    
    size_t lenNbr1 = strlen(nbr1);
    size_t lenNbr2 = strlen(nbr2);    
    size_t resultSize = ((lenNbr1 > lenNbr2) ? lenNbr1 : lenNbr2) + 1;

    printf("%lu\n", resultSize);

    char value1[resultSize], value2[resultSize], result[resultSize];
    
    for(size_t i = 0; i < resultSize; i++)
    {
        *(value1 + i) = '0';
        *(value2 + i) = '0';
        *(result + i) = '0';
    }

    for (char *ptr_value = value1, *ptr_nbr = nbr1 + lenNbr1 - 1; ptr_nbr >= nbr1; ptr_value++, ptr_nbr--)
    {
        *ptr_value = *ptr_nbr;
    }
    
    for (char *ptr_value = value2, *ptr_nbr = nbr2 + lenNbr2 - 1; ptr_nbr >= nbr2; ptr_value++, ptr_nbr--)
    {
        *ptr_value = *ptr_nbr;
    }    

    int report = 0;
    for (char *ptr_value1 = value1, *ptr_value2 = value2, *ptr_result = result + resultSize - 1; ptr_value1 < value1 + resultSize; ptr_value1++, ptr_value2++, ptr_result--)
    {
        int somme = (*ptr_value1 - asciiDiff) + (*ptr_value2 - asciiDiff) + report;
        report = somme / 10;
        *ptr_result = (somme % 10) + asciiDiff;
    }

    if(report != 0)
        *result = report + asciiDiff;

    printf("%s\n", result);

    return EXIT_SUCCESS;
}