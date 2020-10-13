#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Exo 3.1
    int x = 16, y = -5;
    if((x > -1 && y < 0) || (x < 0 && y > -1))
        printf("résultat négatif...\n\n");
    else
        printf("résultat positif...\n\n");

    //Exo 3.2
    printf("Veuillez encoder deux nombres séparés par un espace : ");
    scanf("%d %d", &x, &y);
    printf("Plus grand : %d\n\n", (x > y) ? x : y);
    
    //Exo 3.3
    printf("Veuillez encoder l'année : ");
    int annee;
    scanf("%d", &annee);
    if((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0)
    {
        printf("Année bissextile...\n\n");
    }
    else
    {
         printf("Année classique...\n\n");
    }
    
    //Exo 3.4   
    int moyenne;
    printf("Veuillez encoder votre moyenne : ");
    scanf("%d", &moyenne);
    switch (moyenne)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            printf("Insuffisance grave");
            break;
        case 8:
        case 9:
            printf("Insuffisant");
            break;
        case 10:
        case 11:
            printf("Faible");
            break;
        case 12:
        case 13:
            printf("Suffisant");
            break;
        case 14:
        case 15:
            printf("Bien");
            break;
        case 16:
        case 17:
            printf("Très bien");
            break;
        case 18:
        case 19:
        case 20:
            printf("Excellent");
            break;
        default:
            printf("Valeur invalide!");
            break;
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}